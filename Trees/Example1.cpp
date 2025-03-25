#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int x){
        data=x;
        left=right=nullptr;
    }
};


int main(){
   Node *root=new Node(10);
}