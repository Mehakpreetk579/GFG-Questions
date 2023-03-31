//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        // code here
        if(N==1)    return 0;
        int count=0;
            
        //Solution with T(n)=O(sqrt(N))
        for(int i=2; i<=sqrt(N); i++)
        {
            if(N%i == 0)
             {   
                 count++;
                 break;
             }
        }
        if(count == 0)
            return 1;
        else
            return 0;
            
        //Solution with T(n)=O(n)
        //Also getting TLE error
        // for(int i=2; i<N; i++)
        // {
        //     if(N%i == 0)
        //         count++;
        // }
        // if(count == 0)
        //     return 1;
        // else
        //     return 0;
        
        // //Solution with T(n)=O(n/2)
        // //Also getting TLE error    
        // for(int i=2; i<=N/2; i++)
        // {
        //     if(N%i == 0)
        //         count++;
        // }
        // if(count == 0)
        //     return 1;
        // else
        //     return 0;
        
        // //Solution with T(n)=O(n) with time optimized
        // //Also getting TLE error    
        // for(int i=2; i<N; i++)
        // {
        //     if(N%i == 0)
        //      { 
                //     count++;
                //     break;
                // }
        // }
        // if(count == 0)
        //     return 1;
        // else
        //     return 0;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends