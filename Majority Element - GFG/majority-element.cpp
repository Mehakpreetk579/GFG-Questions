//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
        // your code here
        int res=0;  //for current index
        int count=1;
        //find candidate for majority element
        for(int i=1; i<size; i++)
        {
            if(arr[res]==arr[i])    count++;
            else    count--;
            
            if(count==0)
            {
                res = i;
                count = 1;
            }
        }
        //calculate total count of majority element present
        count = 0;
        for(int i=0; i<size; i++)
            if(arr[i] == arr[res])
                count++;
        if(count > size/2) return arr[res];
        else    return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends