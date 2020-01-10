#include <iostream>
#include <queue>
#include <map>
using namespace std;

// Structure of binary tree left, head, right
struct Node
{
    Node *left;
    Node *right;
    int head;
    int data;

    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

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

// function should print the topView of
// the binary tree
void topview(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    map<int, int> m;
    int head = 0;
    root->head = head;

    // push node and horizontal distance to queue
    q.push(root);
    while (q.size())
    {
        head = root->head;

        // count function returns 1 if the container
        // contains an element whose key is equivalent
        // to head, or returns zero otherwise.
        if (m.count(head) == 0)
            m[head] = root->data;
        if (root->left)
        {
            root->left->head = head - 1;
            q.push(root->left);
        }
        if (root->right)
        {
            root->right->head = head + 1;
            q.push(root->right);
        }
        q.pop();
        root = q.front();
    }

    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->second << " ";
    }
}

// Driver Program to test above functions
int main()
{
     Node*root=buildTreeFromLevelOrder();
    topview(root);
    return 0;
}
