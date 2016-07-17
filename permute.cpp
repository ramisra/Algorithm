#include<iostream>

using namespace std;


void swapc(char *x,char *y){

    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void permute(char *s,int i,int n){

    int j;
    if(i==n){
        cout<<*s<<endl;
    }else{

        for(j=i;j<n;j++){
            swapc(s+i,s+j);
            permute(s,i+1,n);
            swapc(s+j,s+i);

        }
    }
}
int main(){

    char s[]="ABC";
    permute(s,0,2);
    return 0;
}
