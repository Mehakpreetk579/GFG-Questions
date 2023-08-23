//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> arr, int k) {
    //code here
    int s = 0, e = arr.size()-1;
    int n = arr.size()-1;
    int mid;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(arr[mid] == k)   return mid;
        
        //checks left subarray is sorted or not
        if(arr[mid] >= arr[s])
        {
            if(k<arr[mid] && k>=arr[s]) //checks if k lies in left sorted subarray
                e = mid-1;
            else if(arr[s] == k)    return s;
            else
                s = mid+1;
        }
        
        //checks right subarray is sorted or not
        if(arr[mid] <= arr[e]) 
        {
            if(arr[mid]<k && k<=arr[e]) //checks if k lies in right sorted subarray
                s = mid+1;
            else if(arr[e] == k)    return e;
            else
                e = mid-1;
        }
    }
    return -1;
}