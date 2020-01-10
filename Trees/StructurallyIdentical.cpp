#include<iostream>
#include<string.h>
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
int i=0;
void print(node *root,char* arr)
{
    if(root==NULL)
    {
        arr[i++]='0';
        return;
    }
    arr[i++]='1';
    print(root->left,arr);
    print(root->right,arr);
}
int main()
{
    node *root1 ;
    node *root2;
    char aage[20]="true";
    root1=build(aage);
    char aa[20]="true";
    root2=build(aa);
    char input[20];
    char out[20];
    print(root1,input);
    i=0;
    print(root2,out);
    //cout<<input<<endl;
    //cout<<out<<endl;
    if(!strcmp(input,out))
    cout<<"true";
    else
    cout<<"false";
    return 0;
}
