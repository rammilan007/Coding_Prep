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
void printlist(Node *node){
    while(node !=NULL){
        cout<<node->data<<"->";
        node=node->next;
    }
}
void insertAfter(Node *prev_node, int data){
    Node *new_node =new Node();
    new_node->data=data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
    
}
int main() {
	// your code goes here
	int n,m;
	Node *head=NULL;
	head=new Node();
	head->data=0;
	cin>>n;
// 	cout<<&head<<endl;
	for(int i=0;i<n;i++){
		cin>>m;
		push(&head,m);
		cout<<head->data;
		if(i==2){insertAfter(head->next,8);}
		
	}
	cout<<endl<<"linked list printing..."<<endl;
	printlist(head);
	
	return 0;
}
