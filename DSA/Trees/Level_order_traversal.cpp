#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int data)
    {
        key=data;
        left=right=NULL;
    }
};

//...................................................................

void Breadth_first_traversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> q;                           //create a queue...
    q.push(root);
    
    cout<<"Breadth first traversal: ";
    
    while(!q.empty())
    {
        Node* temp = q.front();
        cout << temp->key <<" ";
        
        if(temp->left != NULL)
            q.push(temp->left);
            
        if(temp->right != NULL)
            q.push(temp->right);
            
        q.pop();
    }
}

//......Driver Code......

int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->right=new Node(60);
    root->left->right=new Node(50);
    root->left->left=new Node(40);
    root->left->right->left=new Node(70);
    root->left->right->right=new Node(80);

    Breadth_first_traversal(root);
    return 0;
}
