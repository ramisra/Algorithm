#include<iostream>

using namespace std;



int knap(int W,int wt[],int val,int n){

    int K[n+1][W+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<=W;j++){

                if(i==0||j==0){
                    K[i][j]=0;
                }else{

                    if(wt[j]<=j-1){

                        K[i][j]=max(K[i-wt[j]][j-1],K[i][j-1]);

                    }else{

                        K[i][j]=K[i][j-1];
                    }
                }
        }
    }
    return  K[n][W];

}
int main(){

    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    cout<<knap(W, wt, val, n);
    return 0;


}
