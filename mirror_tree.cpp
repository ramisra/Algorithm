#include <iostream>

using namespace std;

struct node{

    struct node * left;
    int value;
    struct node *right;
};
struct node *tree;
struct node * new_node(int data){

    struct node *temp=new struct node;
    temp->value=data;
    temp->right=0;
    temp->left=0;
    return temp;
}
void print(struct node *tree){
    if(tree==0){
        return ;
    }else{

        print(tree->left);
        cout<<tree->value;
        print(tree->right);
    }
}
void mirror_tree(struct node *tree){

    if(tree==0){
        return;
    }else{
        struct node *temp;


        temp=tree->left;
        tree->left=tree->right;
        tree->right=temp;
        mirror_tree(tree->left);
        mirror_tree(tree->right);

    }
}
int main(){

tree=new_node(1);
tree->left=new_node(2);
tree->right=new_node(3);
tree->left->left=new_node(4);
tree->left->right=new_node(5);
tree->right->left=new_node(6);
tree->right->right=new_node(7);

print (tree);

cout<<endl;

mirror_tree(tree);

print(tree);
}
