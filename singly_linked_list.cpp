#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
};
void push(Node** head_ref,int new_data){
	Node *new_node=new Node();
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
int main() {
	// your code goes here
	int n,m;
	Node *head=NULL;
	head=new Node();
	head->data=44;
	cin>>n;
	cout<<&head<<endl;
	for(int i=0;i<n;i++){
		cin>>m;
		push(&head,m);
		cout<<head->data;
		
	}
	return 0;
}
