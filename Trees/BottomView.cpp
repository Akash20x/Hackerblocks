#include <bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define max 1000002
#define mod 1000000007
#define ll long long



using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;

    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }

};
node* buildTreeFromLevelOrder(){

	int d;
	cin>>d;

	node*root = new node(d);
	queue<node*> q;
	q.push(root);

	while(!q.empty()){

		node*f = q.front();
		q.pop();
		int c1,c2;
		cin>>c1>>c2;

		if(c1!=-1){
			f->left = new node(c1);
			q.push(f->left);
		}
		if(c2!=-1){
			f->right = new node(c2);
			q.push(f->right);
		}
	}
	return root;
}


void printBottomViewUtil(node * root, int curr, int hd, map <int, pair <int, int> > & m) 
{ 
    // Base case 
    if (root == NULL) 
        return; 
      
    // If node for a particular  
    // horizontal distance is not 
    // present, add to the map. 
    if (m.find(hd) == m.end())  
    { 
        m[hd] = make_pair(root -> data, curr); 
    }  
    // Compare height for already  
    // present node at similar horizontal 
    // distance 
    else 
    { 
        pair < int, int > p = m[hd]; 
        if (p.second <= curr) 
        { 
            m[hd].second = curr; 
            m[hd].first = root -> data; 
        } 
    } 
      
    // Recur for left subtree 
    printBottomViewUtil(root -> left, curr + 1, hd - 1, m); 
      
    // Recur for right subtree 
    printBottomViewUtil(root -> right, curr + 1, hd + 1, m); 
} 
  
void printBottomView(node * root)  
{ 
      
    // Map to store Horizontal Distance, 
    // Height and Data. 
    map < int, pair < int, int > > m; 
      
    printBottomViewUtil(root, 0, 0, m); 
      
     // Prints the values stored by printBottomViewUtil() 
    map < int, pair < int, int > > ::iterator it; 
    for (it = m.begin(); it != m.end(); ++it) 
    { 
        pair < int, int > p = it -> second; 
        cout << p.first << " "; 
    } 
} 

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	node*root=buildTreeFromLevelOrder();
	printBottomView(root);
	return 0;
}
