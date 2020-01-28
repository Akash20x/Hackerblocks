#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
	}
};
void k_Reverse(node* &head, int n, int k){
	node* first = head;
	node* current = head;
	node* prevFirst = first;
	node* NEXT = NULL;
	node* PREV = NULL;
	for(int i = 0; i < (n/k); i++){
		for(int j = 0; j < k; j++){
			NEXT = current->next;
			current->next = PREV;
			PREV = current;
			current = NEXT;
		}
		if(first == head){
			head = PREV;
		}
		prevFirst->next = PREV;
		prevFirst = first;
		first->next = NEXT;
		PREV = first;
		first = NEXT;
	}
}
void printList(node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
void insertAtTail(node* &head, int data){
	if(head == NULL){
		head = new node(data);
		return;
	}
	node* tail = head;
	while(tail->next != NULL){
		tail =  tail->next;
	}
	node* temp = new node(data);
	tail->next = temp;
}
void makeList(node* &head, int n){
	int data;
	for(int i = 0; i < n; i++){
		cin >> data;
		insertAtTail(head, data);
	}
}
int main(){
	node* head = NULL;
	int n, k;
	cin >> n >> k;
	makeList(head, n);
	k_Reverse(head, n, k);
	printList(head);
	return 0;
}
