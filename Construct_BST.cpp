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
int minValue(Node *tree){
    Node *current= new Node();
    current=tree;
    while(current->left!=NULL ){
        current=current->left;
    }
    return current->data;
}
bool ifNodeExists(Node *tree,int key){
    if(tree==NULL) return false;
    if(tree->data==key) return true;
    bool recleft=ifNodeExists(tree->left,key);
    bool recright=ifNodeExists(tree->right,key);
    return recleft || recright;
}

int main()
{int arr[] = { 100, 20, 3, 4, 5, 61, 20, 63, 64 };
int n = sizeof(arr)/sizeof(arr[0]);
   Node* tree =new Node();
   for(int i=0;i<n;i++){
       if(i==0) tree->data=arr[0];
    insert(arr[i],tree);   
   }
   inOrder(tree);
   cout<<"tree printed..."<<endl;
   cout<<"min value is "<<minValue(tree)<<endl;
   cout<<"Node exists or not (0 / 1 ): "<<ifNodeExists(tree,33);
   return 0;
}
