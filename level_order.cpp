#include<iostream>
#include<vector>
using namespace std;



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

void print_level_order(struct node *root,int level){

    if(root==NULL){
        return;
    }
    if(level==1){
            cout<<root->data;
    }else if(level >1){

        print_level_order(root->left,level-1);
        print_level_order(root->right,level-1);

    }
}

void print_level(struct node* root){

    int n=3;
    for(int i=0;i<n;i++){

        print_level_order(root,i);
    }
}


int main(){

    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    return 0;
}
