#include<iostream>
#include<vector>
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
void print(vector <int> v){

    vector<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){

        cout<<*itr;
    }
    cout<<endl;
}
void root_to_leaf(struct node *root,vector<int> v){

    if(root==NULL){
            return ;
    }
    if(root->left==NULL && root->right==NULL){
            print(v);
    }else{
        v.push_back(root->data);
        root_to_leaf(root->left,v);
        root_to_leaf(root->right,v);
        }

}

int main(){
    vector<int>v;
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root_to_leaf(root,v);

    return 0;

}
