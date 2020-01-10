#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data=data;
    }
};
node* build(char* aage )
{
   
   int d;
   if(!strcmp("true",aage))
   {
       cin>>d;
       node *root=new node(d);
     //  cout<<d<<" ";
       char more[20];
    cin>>more;
   root->left=build(more);
   cin>>more;
   root->right=build(more);
   return root;
   }
   else 
   return NULL;

}
int height(node *root)
{
  if(root==NULL)
    return 0;
  int lh = height(root->left);
  int rh = height(root->right);
  return max(lh,rh)+1;
}
bool is_balanced(node *root)
{
  if(root==NULL)
    return true;
  int left=height(root->left);
  int right=height(root->right);
  if(is_balanced(root->left)&&is_balanced(root->right)&&abs(left-right)<=1)
    return true;
  return false;

}
int main()
{
  node *root;
  char aage[20]="true";
  root=build(aage);
  if(is_balanced(root))
    cout<<"true"<<endl;
  else
    cout<<"false";
  return 0;
}
