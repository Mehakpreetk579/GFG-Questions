//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        //Your Code Here
        sort(arr, arr+n);
        for(int i=0; i<n-2; i++)
        {
            int left=i+1, right=n-1;
            int sum;
            while(left < right)
            {
                sum = arr[i] + arr[left] + arr[right];
                if( sum == X)    return true;
                else if(sum < X)    ++left;
                else    --right;
            }
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends