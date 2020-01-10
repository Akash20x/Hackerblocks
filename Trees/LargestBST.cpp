#include<iostream>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node* left;
	node* right;
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};
node* build(int in[],int pre[],int s,int e)
{
	static int i=0;
	if(s>e)
	return NULL;
	
	int mid=-1;
	
	node* root=new node(pre[i]);
	for(int j=s;j<=e;j++)
	{
		if(pre[i]==in[j])
		{
			mid=j;
			break;
		}
	}
	i++;
	root->left=build(in,pre,s,mid-1);
	root->right=build(in,pre,mid+1,e);
	return root;
}
int height(node* root)
{
	if(root==NULL)
	return 0;
	return height(root->left)+1+height(root->right);
}
bool util(node* root, int minNode, int maxNode) {
    if(root==NULL) return true;
    if(root->data < minNode ||  root->data > maxNode)
        return false;
    return util(root->left, minNode, root->data) && util(root->right, root->data, maxNode);
}
int isValidBST(node* root) {
    if(util(root, INT_MIN,INT_MAX))
    return height(root);
    return max(isValidBST(root->left),isValidBST(root->right));
}

void inorder(node* root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	int n;
	cin>>n;
	int pre[n],in[n];
	for(int i=0;i<n;i++)
	cin>>pre[i];
	for(int j=0;j<n;j++)
	cin>>in[j];
	node *root=build(in,pre,0,n-1);
	//inorder(root);
	cout<<isValidBST(root)<<endl;
	return 0;
}
