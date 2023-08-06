//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    
    void solution(int i, int k, vector<int>&arr)
    {
        if(arr.size()==1)   return;
        
        i = (i+k-1)%arr.size();
        arr.erase(arr.begin() + i); //deleting the element at kth position from current
        solution(i, k, arr);
    }
    
    int josephus(int n, int k)
    {
       //Your code here
       vector<int> ans(n); //declare vector of size n
       for(int i=0; i<n; i++)   ans[i] = i+1;
       
       solution(0, k, ans);
       
       return ans[0];
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends