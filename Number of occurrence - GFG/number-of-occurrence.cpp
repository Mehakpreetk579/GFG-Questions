//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
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
	int count(int arr[], int n, int x) {
	    // code here
	    int s=0, e=n-1;
        int count=0;
        // //recursive way
        int start = (firstOccurence(arr, n, s, e, x));
        int end = (lastOccurence(arr, n, s, e, x));
        if(start == -1 && end == -1)    return 0;
        else    return (end - start +1);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends