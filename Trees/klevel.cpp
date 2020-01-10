#include<iostream>
using namespace std;
class node 
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* build()
{
    int d,c;
    cin>>d;
    node *root = new node(d);
    cin>>c;
    if(c==1)
    {
        root->left = build();
    }
    else if(c==2)
    {
        root->left=build();
        root->right=build();
    }
    return root;

}
void print(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int s;
int sum(node *root,int k)
{
    
    if(root==NULL)
        return 0;
    if(k==0)
        s+=root->data;
    sum(root->left,k-1);
    sum(root->right,k-1);
   // s+=(sum(root->left,k-1)+sum(root->right,k-1));
    return s;
}
int main()
{
    node *root = build();
   // print(root);
    cout<<endl;
    int k;
    cin>>k;
    sum(root,k);
    cout<<s;
    return 0;

}
