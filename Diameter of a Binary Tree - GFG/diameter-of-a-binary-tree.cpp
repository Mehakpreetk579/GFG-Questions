//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    // int height(Node* root)
    // {
    //     if(root == NULL)    return 0;
    //     int lh = height(root->left);
    //     int rh = height(root->right);
    //     return (max(lh, rh)+1);
    // }
    pair<int, int> diaFast(Node* root) //<diameter, height>
    {
        if(root == NULL)
        {
            pair<int, int> p = make_pair(0,0);
            return p;
        }
        
        pair<int, int> left = diaFast(root->left);
        pair<int, int> right = diaFast(root->right);
        int op1 = left.first;   //Dia pf left subtree
        int op2 = right.first;  //Dia of right subtree
        int op3 = 1 + left.second + right.second; //dia of BT
        
        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3)); //Diameter of BT
        ans.second = max(left.second, right.second)+1; //height of BT
        
        return ans;
    }
    int diameter(Node* root) {
        // Your code here
        //Approach 1 - T(n)=O(n^2)
        // if(root== NULL) return 0;
        // int op1 = diameter(root->left);
        // int op2 = diameter(root->right);
        // int op3 = 1 + height(root->left) + height(root->right); //taking O(n)
                
        // return max(op1, max(op2, op3));
        
            
        //Approach 2 - T(n)=O(n)
        return diaFast(root).first;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.diameter(root) << endl;
    }
    return 0;
}

// } Driver Code Ends