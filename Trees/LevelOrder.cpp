#include<iostream>
#include<string.h>
#include<cstdlib>
#include<stack>
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
void printKlevel(node* root,int k)
{
    if(root==NULL)
      return;
    if(k==1)
    {
      cout<<root->data<<" ";
      return;
    }
    printKlevel(root->left,k-1);
    printKlevel(root->right,k-1);

}
stack<int> s;
void print_stack(node *root,int k)
{
  if(root==NULL)
    return ;
  if(k==1)
  {
    s.push(root->data);
  }
  print_stack(root->left,k-1);
  print_stack(root->right,k-1);
}
void printAlllevels(node* root)
{
  int i=1;
  int h=height(root);
  for(i=1;i<=h;i++)
  {
    if(i%2==1)
      printKlevel(root,i);
    else
      {
        print_stack(root,i);
        while(!s.empty())
        {
          cout<<s.top()<<" ";
          s.pop();
        }
      }
  }

}
int main()
{
  node *root;
  char aage[20]="true";
  root=build(aage);
  printAlllevels(root);
  return 0;
}
