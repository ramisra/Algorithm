#include<iostream>

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
bool identical(struct node *root1,struct node * root2){

    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1!=NULL && root2!=NULL){

        return ((root1->data==root2->data) && identical(root1->left,root2->left) && identical(root1->right,root2->right));
    }
}
int main(){

struct node *root1 = newNode(1);
    struct node *root2 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(6);

    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);

    if(identical(root1, root2))
        cout<<"Both tree are identical";
    else
        cout<<"Trees are not identical.";
 return 0;
}
