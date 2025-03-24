// self Reference Class and self Reference structure
/*
1.Self-Referential Class
A self - referential class is a class that contains a member(often a pointer or reference) that refers to another object of the same class.This is commonly used in scenarios like implementing linked data structures(e.g., linked lists, binary trees).


2.Self-Referential Structure
Similarly, in structures, a self-referential structure contains a member that refers to the same structure type. This is widely used in C and C++ for implementing data structures.
*/

#include<iostream>
using namespace std;
class node{
public: 
    int data;
    node *left,*right;
public:
    node(int x){
        data=x;
        left=right=nullptr;
    }

};
void perorder(node *root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<endl;
    perorder(root->left);
    perorder(root->right);
}
void postorder(node *root){
    if(root==nullptr)
    return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}
void inorder(node * root){
    if(root==nullptr){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

int main(){
 node *root=new node(10);
 root->left=new node(20);
 root->right=new node(30);
//  cout<<root->data<<endl;
//  cout << root->left->data << endl;
//  cout << root->right->data << endl;
perorder(root);
postorder(root);
inorder(root);
}
