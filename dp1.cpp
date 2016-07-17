#include<iostream>

using namespace std;

int max_sub_util(int arr[],int n,int* max_ref){

    if(n==1)
        return 1;
    int res,max_end=1;

    for(int i=1;i<n;i++){

        res=max_sub_util(arr,i,max_ref);
        if((arr[i-1]<arr[n-1]) && res+1>=max_end){
            max_end=res+1;
        }
    }
    if(max_end>*max_ref){
        *max_ref=max_end;
    }
    return max_end;
}
int max_sub(int arr[],int n){

    int max_i=1;

    max_i=max_sub_util(arr,n,&max_i);

    return max_i;
}
int main(){

    int arr[]={10,22,9,33,21,50,41,60};
    cout<<"Largest incresing Subsequence is"<< max_sub(arr,2);
    return 0;
}
