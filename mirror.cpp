#include<iostream>

using namespace std;

int max_height=0;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data)
{
    struct node* node =new struct node;
    node->data  = data;
    node->left  = NULL;
    node->right = NULL;

    return(node);
}
void mirror_tree(struct node *root){


    if(root==NULL){
        return;
    }else{
          struct node *temp;
        temp=root->left;
        root->left=root->right;
        root->right=temp;
        mirror_tree(root->left);
        mirror_tree(root->right);
    }

}
void inorder(struct node *root){
    if(root==NULL){
        return;
    }else{

     inorder(root->left);
    cout<<root->data;
     inorder(root->right);
     }

}
int main(){

struct node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    mirror_tree(root);

    inorder(root);
    cout<<"Height of tree is"<<max_height;


    return 0;
}
