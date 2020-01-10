#include<iostream>
#include<algorithm>
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
node *root = NULL; 
node* insertinbst(node* temp,int ele)
{
    if(temp==NULL)
    {
        temp = new node(ele);
        return temp;
    }   
    if(temp->data>ele)
    {
        temp->left=insertinbst(temp->left,ele);
        return temp;
    }
    else
    {
        temp->right=insertinbst(temp->right,ele);
        return temp;
    }

}
void build(int *arr,int n)
{
    int i=0;
    
        root = new node(arr[i]);
        i++;
    
    while(i<n)
    {
        root=insertinbst(root,arr[i]);
        i++;
    }
    
}
void print_preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    print_preorder(root->left);
    print_preorder(root->right);

}
int main()
{
    int t,n;
    cin>>t;
    int arr[60];
    int a,b;
    int array[60];
    while(t--)
    {
        root=NULL;
        cin>>n;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        cin>>a>>b;
        build(arr,n);
        cout<<"# Preorder : ";
        print_preorder(root);
        int index=0;
        for(int z=0;z<n;z++)
        {
            if(arr[z]>=a&&arr[z]<=b)
                array[index++]=arr[z];
        }
        sort(array,array+index);
        cout<<endl;
        cout<<"# Nodes within range are : ";
        for(int p=0;p<index;p++)
            cout<<array[p]<<" ";
        cout<<endl;
    }
    return 0;

}
