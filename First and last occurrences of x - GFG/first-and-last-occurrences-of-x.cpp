//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int firstOccurence(int arr[], int n, int s, int e, int k) {
        if(s > e)   return -1;
        int mid = (s+e)/2;
        if(arr[mid]>k)  return firstOccurence(arr, n, s, (mid-1), k);
        else if(arr[mid]<k) return firstOccurence(arr, n, (mid+1), e, k);
        else
        {
            if(arr[mid-1] != k) return mid;
            return firstOccurence(arr, n, s, (mid-1), k);
        }
    };
    int lastOccurence(int arr[], int n, int s, int e, int k) {
        if(s > e)   return -1;
        int mid = (s+e)/2;
        if(arr[mid]>k)  return lastOccurence(arr, n, s, (mid-1), k);
        else if(arr[mid]<k) return lastOccurence(arr, n, (mid+1), e, k);
        else
        {
            if(arr[mid+1] != k) return mid;
            return lastOccurence(arr, n, (mid+1), e, k);
        }
    };
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int s=0, e=n-1;
        vector<int> res;
        res.push_back(firstOccurence(arr, n, s, e, x));
        res.push_back(lastOccurence(arr, n, s, e, x));
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends