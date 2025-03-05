#include<iostream>
using namespace std;
class Bst{
    public:
    int data;
    Bst* left;
    Bst*right;
    Bst(int x){
        data=x;
        left=right=nullptr;
    }

};
Bst* insert(Bst* start,int value){
    if(start==nullptr){
        return new Bst(value);
    }
    if(value<start->data){
        start->left=insert(start->left,value);
    }
    else if(value>start->data){
        start->right = insert(start->right, value);
    }
    return start;
}
void inorder(Bst* root){
    if(root==nullptr)
    return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
         

    Bst* root=nullptr;
    int value[]={50,30,70,20,40,60,80};
    for(auto p:value){
        root=insert(root,p);
    }
    inorder(root);
    cout<<endl;

}