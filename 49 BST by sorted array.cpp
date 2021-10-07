/*[49] Given an array, arr[] having all the elements sorted in 
ascending order, write a program to convert it to a height 
balanced BST.*/
#include <iostream>
using namespace std;

struct BST{
    int data;
    BST *left,*right;
};
BST* newNode(int x){
    BST* node=new BST;
    node->left=NULL;
    node->right=NULL;
    node->data=x;
    return node;
} 
BST* arrayToBST(int a[],int start,int end){
    if(start>end)
        return NULL;
    int mid=start+(end-start)/2;
    BST *root=newNode(a[mid]);
    root->left=arrayToBST(a,start,mid-1);
    root->right=arrayToBST(a,mid+1,end);
    return root;
}
void preOrder(BST *root){
    if(root==NULL)
        return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    BST *root=arrayToBST(a,0,n-1);
    //to check program run correct or not.
    preOrder(root);
	return 0;
}