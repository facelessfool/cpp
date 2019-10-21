#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int key;
    Node * left;
    Node * right;
};

//Level order Traversal (BST)
Node * create(int key){

    Node * node=new Node();
    node->key=key;
    node->left=NULL;
    node->right=NULL;
    return node;
}

Node * search(Node * root,int key){
    if(root==NULL)
        return NULL;

    
    queue < Node *> q;
    Node * out=NULL;
    q.push(root);


    while(!q.empty()){
        Node * temp=q.front();

    q.pop();

    if(temp->key==key)
     {out=temp;
     cout<<"HIT"<<endl;
    }    
    if(temp->left !=NULL) q.push(temp->left);
    if(temp->right!=NULL) q.push(temp->right);


    }
    return out;



}

int main(){
    Node *root=create(1);
    root->left=create(2);
    root->left->left=create(4);

    root->right=create(2);
    root->right->right=create(5);

    Node* node = search(root,2);
    cout<<node->key<<endl;
    cout<<node->right->key;

}