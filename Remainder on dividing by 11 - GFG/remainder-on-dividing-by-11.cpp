//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
       // code here
       int even=0, odd=0;
       for(int i=0, j=1; i<x.size(), j<x.size(); i=i+2, j=j+2)
       {
           even = even + x[i] - '0';
           odd = odd + x[j] - '0';
       }
       int rem = (odd-even)%11;
       if(rem>=0)    return rem;
       else return rem+11;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends