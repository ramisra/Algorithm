#include<iostream>
#include<vector>

using namespace std;

vector<int> dec_sub(int arr[],int n,int *max_length){


    int counter=0;
    vector<int> v;
    vector<int> v1;
    for(int i=0;i<n;i++){

            v.clear();
            counter=0;
            v.push_back(arr[i]);

        for(int j=i+1;j<n;j++){

                if(arr[j]>arr[i]){

                    counter++;
                    v.push_back(arr[j]);
                }else{
                    break;
                }

        }

        if(*max_length <counter){

            *max_length=counter;
            v1=v;

        }

    }
    return v1;
}
int main(){

    int arr[]={1,0,2,3,4,-5};
    int max_length=0;
    vector <int> v1=dec_sub(arr,6,&max_length);
    vector<int>::iterator itr;
    for(itr=v1.begin();itr!=v1.end();itr++){

        cout<<*itr;
        cout<<endl;
    }
    cout<<max_length;

}
