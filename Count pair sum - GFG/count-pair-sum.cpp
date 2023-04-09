//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        //code here.
        int count=0;
        int left =0;
        int right = n-1;
        while(left<m && right>=0)
        {
            int sum = arr1[left] + arr2[right];
            if(sum == x)    
            {
                count++;
                left++, right--;
            }
            else if(sum<x)  left++;
            else    right--;
        }
        //O(n^2) Approach
        // for(int i=0; i<m; i++)
        //     for(int j=0; j<n; j++)
        //         if(arr1[i]+arr2[j] == x)  count+=1;
        return count;
    } 
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int arr1[m],arr2[n];
	    int x ;
	    for(int i=0;i<m;i++)
	        cin>>arr1[i];
	    for(int j=0;j<n;j++)
	        cin>>arr2[j];
	    cin>>x;
	    Solution ob;
	    cout <<ob.countPairs(arr1, arr2, m, n, x)<<endl;
	}
	return 0;	 
}


// } Driver Code Ends