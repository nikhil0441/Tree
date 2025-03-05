#include<iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int date;
    Node* left;
    Node* right;
    Node(int value){
      date=value;
      left=right=nullptr;
    }

};
int main(){
    int x;
    cout<<"enter the root elements";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root=new Node(x);
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout << "enter the left child of" << temp->date;
        cin>>first;
        if(first!=-1){
            
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout << "enter the right child of" << temp->date;
        cin >> second;
        if (second != -1)
        {

            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

}