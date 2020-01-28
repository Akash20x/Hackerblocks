#include<iostream>
using namespace std;
class node
{
  public:
  long long  data;
node *next;
node(long long data)
{
	this->data=data;
	next=NULL;
}
};
int main()
{
	node *head1=NULL;
	node *head2=NULL;
	int t;
	cin>>t;
for(int p=0;p<t;p++)
	{
	long long  a,b;
	cin>>a;
	long long ele;
	node *tail;
	if(a>0)
	{  
	cin>>ele;
	head1 = new node(ele);
	tail=head1;}
	for(long long i=0;i<a-1;i++)
	{
		cin>>ele;
		node *temp=new node(ele);
		tail->next=temp;
		tail=temp;
	}
	cin>>b;
	if(b>0)
	{cin>>ele;
	head2=new node(ele);
	tail=head2;}
	for(long long i=0;i<b-1;i++)
	{
		cin>>ele;
		node *temp=new node(ele);
		tail->next=temp;
		tail=temp;
		
	}
	node *head;

	if(a==0)
	{
		head=new node(head2->data);
		head2=head2->next;
	}
	else if(b==0)
	{
		head = new node(head1->data);
		head1=head1->next;
	}
	else if(head1->data>head2->data)
	{
		head=new node(head2->data);
		head2=head2->next;
		
	}
	else
	{
		head = new node(head1->data);
		head1=head1->next;
		
	}
	node *t = head;
	while(head1!=NULL&&head2!=NULL)
	{
		long long  d;
		if(head1->data>head2->data)
		{
			d=head2->data;
			head2=head2->next;
		}
		else
		{
			d=head1->data;
			head1=head1->next;
		}
		node *temp=new node(d);
		t->next=temp;
		t=temp;
		
	}
	while(head1!=NULL)
	{
		node *temp=new node(head1->data);
		t->next=temp;
		t=temp;
		head1=head1->next;
	}
	while(head2!=NULL)
	{
		node *temp=new node(head2->data);
		t->next=temp;
		t=temp;
		head2=head2->next;
	}
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
		
	cout<<endl;
	}
	return 0;
}
