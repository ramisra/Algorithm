#include <iostream>

using namespace std;

struct node{

    struct node * left;
    int value;
    struct node *right;
};

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
int count_leaf(struct node *tree,int counter){
    if(tree==0)
        return 0;
    if(tree->left==0 && tree->right==0){
        return 1;
    }else{

        return count_leaf(tree->left,counter) +
        count_leaf(tree->right,counter);
        }

}
int main(){

struct node *tree=new_node(1);
tree->left=new_node(2);
tree->right=new_node(3);
tree->left->left=new_node(4);





cout<<endl;


cout<<count_leaf(tree,0);

}
