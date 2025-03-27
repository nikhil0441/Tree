#include<iostream>
#include<algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};
Node * insert(Node *root ,int val){
    if(root ==nullptr){
         return new Node(val);
    }
    if(root->data>val){
        root->left=insert(root->left,val);
    }else if(root->data<val){
     root->right=insert(root->right,val);
    }
    return root;

}
void preorder(Node * root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
int height(Node *root){
    if(root==nullptr)
    return 0;
    int left=height(root->left);
    int right=height(root->right);
    int res=max(left,right)+1;
    return res;
}
int leaf(Node * root ,int &count){
    if(root==nullptr)
    return 0 ;
    leaf(root->left,count);
    leaf(root->right,count);
    if(root->left==nullptr && root->right==nullptr){
        count++;
    }
    return count;

}
int main(){
  Node * root=nullptr;
 int arr[]={10,20,6,4,50,1,30};
 for(int i=0;i<7;i++){
    root=insert(root,arr[i]);
 }
 preorder(root);
 int res=height(root);
 cout<<endl;
 cout<<res;
 int c=0;
cout<<endl<<leaf(root,c);
}