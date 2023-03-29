//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int> temp;
        int mid;
        // code here.. 
        if(sizeOfStack % 2 == 0)
            mid = (sizeOfStack/2)+1;
        else
            mid = (sizeOfStack+1)/2;
            
        for(int i=1; i<mid; i++)
        {
            int x =  s.top();
            s.pop();
            temp.push(x);
        }
        //deleting middle elemnt
        s.pop();
        for(int i=1; i<mid; i++)
        {
            int x = temp.top();
            temp.pop();
            s.push(x);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends