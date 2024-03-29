//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for(int i=0; i<n; i++)
        {
            //first half
            //spaces
            for(int j=0; j<n-i-1; j++)
                cout<<" ";
            //stars
            for(int j=0; j<=i; j++)
                cout<<"* ";
            cout<<"\n";
        }
        for(int i=0; i<n; i++)
        {
            //Second half
            //Spaces
            for(int j=0; j<i; j++)
                cout<<" ";
            //Stars
            for(int j=0; j<n-i; j++)
                cout<<"* ";
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends