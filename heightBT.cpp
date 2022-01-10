#include<iostream>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};
int heightofTree(Node *root){
  
    if(root == NULL){
       return 0;
    }
    return  max(heightofTree(root->left),heightofTree(root->right))+1;

}
void NodesAtDistanceK(Node *root,int k){
   if(root == NULL){return ;}
   if( k== 0){cout<<(root->key)<< " ";}
   else{
       NodesAtDistanceK(root->left,k-1);
       NodesAtDistanceK(root->right,k-1);
   }
}
int main(){
    Node *root=new Node(30);
    root->left=new Node(40);
    root->left->left=new Node(70);
    root->left->left->left=new Node(80);
    root->right=new Node(60);
    cout<<heightofTree(root);
NodesAtDistanceK(root,2);
    return 0;
}