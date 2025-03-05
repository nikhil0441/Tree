#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
Node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    cout << "enter left child of  " << x << endl;
    temp->left = BinaryTree();
    cout << "enter right child of  " << x << endl;
    temp->right = BinaryTree();
    return temp;
}
void postorder(vector<int> &ans, Node *root)
{
    if (root == nullptr)
        return;

    postorder(ans, root->left);
   
    postorder(ans, root->right);
    ans.push_back(root->data);
}
int main()
{

    cout << "enter the root Node:" << endl;
    Node *root;
    root = BinaryTree();
    vector<int> result;
    postorder(result, root);
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
}