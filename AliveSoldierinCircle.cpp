//Lucky alive soldier in circle
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *newNode(int data){
    Node* node=new Node();
    node->data=data;
    node->next=NULL;
    return node;
}
int aliveSol(int num){
    if(num==1) return 1;
    //single node circular linked list
    Node *last=newNode(1);
    last->next=last; //apni tir apni hi gaand me
    for(int i =2;i<=num;i++){
        Node *temp=newNode(i);
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
    //starting from first soldier
    Node *cur=last->next;
    Node* temp;
    while(cur->next!=cur){
        temp=cur;
        cur=cur->next;
        temp->next=cur->next;
        delete cur;
        temp=temp->next;
        cur=temp;
    }int res=temp->data;
    return res;
}
int main(){
    int num;
    cin>>num;
    cout<<aliveSol(num);
    return 0;
}
