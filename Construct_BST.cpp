#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
};
Node* insert(int val, Node* tree){
    if(tree==NULL){
        tree= new Node;
        tree->data=val;
        tree->left=tree->right=NULL;
    }else if(val<tree->data) tree->left=insert(val,tree->left);
    else if(val>tree->data) tree->right=insert(val,tree->right);
    return tree;
}
void inOrder(Node* root) 
{ 
    if (root != NULL) 
    { 
        inOrder(root->left); 
        cout << root->data <<" "; 
        inOrder(root->right); 
    } 
} 

int main()
{int arr[] = { 100, 20, 3, 4, 5, 61, 2, 63, 64 };
int n = sizeof(arr)/sizeof(arr[0]);
   Node* tree =new Node();
   for(int i=0;i<n;i++){
       if(i==0) tree->data=arr[0];
    insert(arr[i],tree);   
   }
   inOrder(tree);
   return 0;
}
