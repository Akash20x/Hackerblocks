 #include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*left;
	node*right;
	node(int d){
	data=d;
	left=right=NULL;
	}
};
node *createpreToIn(int *in ,int *pre,int s,int e){
	static int i=0;
	//base case
	if(s>e){
	return NULL;
	}
	node*root=new node(pre[i]);
	int index=0;
	for(int j=s;j<=e;j++){
	if(in[j]==pre[i]){
	index=j;
	break;
	}
	}
	i++;
	root->left=createpreToIn(in,pre,s,index-1);
	root->right=createpreToIn(in,pre,index+1,e);
	return root;
}
void print(node*root){
	if(root==NULL){
	return;
	}
    if(root->right!=NULL&&root->left!=NULL){
        cout<<root->left->data<<" => "<<root->data<<" <= "<<root->right->data<<endl;
    }
	if(root->left==NULL&&root->right==NULL){
		cout<<"END => "<< root->data <<" <= END"<<endl;
	}
	if(root->left==NULL&&root->right!=NULL){
		cout<<"END => "<< root->data <<" <= "<<root->right->data<<endl;
	}
	if(root->right==NULL&&root->left!=NULL){
		cout<<root->left->data<<" => "<< root->data <<" <= END"<<endl;
	}
	//cout<<root->data<<endl;
	print(root->left);
	print(root->right);

}
int main(){
node*root=NULL;
	int n;
	cin>>n;
	int pre[n];
	
	for(int i=0;i<n;i++){
	cin>>pre[i];
	}
	int m;
	cin>>m;
	int in[m];
	for(int j=0;j<m;j++){
	cin>>in[j];
	}
	root=createpreToIn(in,pre,0,n-1);
	print(root);
}
