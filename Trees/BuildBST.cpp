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
node *build(int *arr,int s,int e)
{
	if(s>e)
		return NULL;
	int mid =(s+e)/2;
	node *root=new node(arr[mid]);
	root->left=build(arr,s,mid-1);
	root->right=build(arr,mid+1,e);
	return root;
}
/*
int height(node *root)
{
	if(root==NULL)
		return 0;
	int lh = height(root->left);
	int rh = height(root->right);
	return max(lh,rh)+1;
}
void printKlevel(node *root,int k)
{
	if(root==NULL)
		return;
	if(k==1)
	{
		cout<<root->data<<" ";
	}
	printKlevel(root->left,k-1);
	printKlevel(root->right,k-1);
}
void printAlllevels(node *root)
{
    int i=1;
    int h=height(root);
    for(i=1;i<=h;i++)
    {
    	printKlevel(root,i);
    	cout<<endl;
    }
}
*/
void print(node* root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}
int main()
{
	int a[1000],n,T;
	cin>>T;
	for(int i=0;i<T;i++)
	{cin>>n;
	for(int j=0;j<n;j++)
		cin>>a[j];
	node *root=NULL;
	root=build(a,0,n-1);
	print(root);
	cout<<"\n";
    }
	return 0;
}
