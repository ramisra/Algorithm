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

void max_level(struct node *root,int height){

    if(root==NULL){
        return;
    }else{



    if(root->left==NULL && root->right==NULL){

        if(height>max_height)
                max_height=height;
    }
       max_level(root->left,height+1);
    max_level(root->right,height+1);
    }

}

int main()
{
    struct node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    max_level(root,0);
    cout<<"Height of tree is"<<max_height;


    return 0;
}



