#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int start_index=0;
int end_index=0;
int best_sum=0;

void max_sum(int sub[],int len){

    int curr_sum=0;
    int val;
    for(int i=0;i<len;i++){
     if((curr_sum==0 )){

            start_index=i;
        }

        val=curr_sum+sub[i];
        if(val>0){
            curr_sum=val;
        }else{

            curr_sum=0;
        }

        if(curr_sum>best_sum)
            {
                best_sum=curr_sum;
                end_index=i;
            }
    }
}
int main(){

    int sub[]={-5,-2,-3,1,100};
    max_sum(sub,5);
    cout<<best_sum<<start_index<<end_index;
}
