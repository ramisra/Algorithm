#include<iostream>
#include<vector>

using namespace std;


vector <int> v;
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
void swap(int x,int y){

        int temp;
        temp=x;
        x=y;
        y=temp;

}
void permute(int arr[],int i,int n){

    int j;
    if(i==n){
        v.push_back(arr[i]);
    }else{
    for(i=j;j<n;j++){

          swap(*arr+i,*arr+j);
          permute(arr,i+1,n);
          swap(*arr+j,*arr+i);


    }
    }

}
void print(){

    vector<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){

        cout<< *itr;
    }
}
int main(){

    int alpha,beta;
    int n;
    vector<int> v;
    cin>>n;
    cin>>alpha>>beta;
    for(i=0;i<n;i++){

        v.push_back()
    }

    permute(arr,0,n);
    print();
}
