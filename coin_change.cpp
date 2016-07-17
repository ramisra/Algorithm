#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int coin_change(int coin[],int curr_index,int sum){


    if (sum== 0){
        return 1;
        }
    if(sum<0){
        return 0;
    }

    if (curr_index <=0 && sum >=1){
        return 0;
        }

    return (coin_change(coin,curr_index,sum-coin[curr_index-1])+ coin_change(coin,curr_index-1,sum));

}

void print(int coin[],int len){

    for(int i=0;i<len;i++){

        cout<<coin[i];
    }
}
int main() {
    int sum,len;
    int s;
    cin>>sum;
    cin>>len;
    int coin[len];

    for(int i=0;i<len;i++){
        cin>>coin[i];
    }
    s=coin_change(coin,len,sum);

    cout<<s;

    return 0;
}
