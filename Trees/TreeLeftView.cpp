#include <bits/stdc++.h>
using namespace std;
#define mkp make_pair

// Node of Binary Tree storing data, level,
// left and right child information
struct Node 
{
    int data;
    int level;
    Node *left, *right;
    Node(int val) 
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to print Left View of Binary Tree
void leftView(Node *root) 
{
    if (root == NULL)
        return;

    // initialising variables
    queue<Node *> q;
    q.push(root);
    root -> level = 0;
    map<int, int> mp;

    // variable to store level of nodes
    int level;

    // asigning level to each node of Binary Tree
    // and replacing nodes of same level in a map with
    // key as level so as to obtain the Left View
    while (!q.empty()) 
    {
        // extract the node at the front of queue
        Node *temp = q.front();
        level = temp -> level;

        // make key as level and data as value for map
        if(mp.find(level) == mp.end())
            mp[level] = temp -> data;

        // remove the extract node from queue
        q.pop();

        // when left child exists, assign level to it,
        // and push it to the queue
        if (temp -> left != NULL) 
        {
            temp -> left -> level = level + 1;
            q.push(temp -> left);
        }

        // when right child exists, assign level to it,
        // and push it to the queue
        if (temp -> right != NULL) 
        {
            temp -> right -> level = level + 1;
            q.push(temp -> right);
        }
    }
    /* 
        Map mp contains:
        [0] : {1}
        [1] : {2}
        [2] : {4}
        [3] : {8}   
    */

    map<int, int> :: iterator it;
    // Iterate over the map keys i.e 0, 1, 2, 3
    for (it = mp.begin(); it != mp.end(); it++)
        cout << it -> second << " ";
}
Node* buildTreeFromLevelOrder(){

    int d;
    cin>>d;

    Node*root = new Node(d);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        
        Node*f = q.front();
        q.pop();
        int c1,c2;
        cin>>c1>>c2;

        if(c1!=-1){
            f->left = new Node(c1);
            q.push(f->left);
        }
        if(c2!=-1){
            f->right = new Node(c2);
            q.push(f->right);
        }
    }
    return root;
}
// Driver Function
int main() 
{
  Node*root=buildTreeFromLevelOrder();
    leftView(root);
    return 0;
}
