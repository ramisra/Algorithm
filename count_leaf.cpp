#include <iostream>

using namespace std;

struct node{

    struct node * left;
    int value;
    struct node *right;
};
int counter;
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
void count_leaf(struct node *tree){
    if(tree==0)
        return;
    if(tree->left==0 && tree->right==0){
        counter ++;
    }else{

        count_leaf(tree->left);
        count_leaf(tree->right);
        }

}
int main(){

struct node *tree=new_node(1);
tree->left=new_node(2);
tree->right=new_node(3);
tree->left->left=new_node(4);
tree->left->right=new_node(5);
tree->right->left=new_node(6);



cout<<endl;

count_leaf(tree);
cout<<counter;

}
