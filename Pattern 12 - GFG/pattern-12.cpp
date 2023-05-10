//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=0; i<n; i++)
        {
            //print digits
            for(int j=0; j<=i; j++)
                cout<<j+1<<" ";
            //print spaces
            for(int j=0; j < 2*(n-1) - 2*i; j++)
                cout<<"  "; //given 2 spaces each
            //print next digits
            for(int j=0; j<=i; j++)
                cout<<i-j+1<<" ";
            cout<<"\n";
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends