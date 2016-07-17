#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int test;
    cin>>test;

    int draw[test];
    for(int i=0;i<test;i++)
    {
        draw[i]=0;
    }

    int dno=0;

    for(int i=0;i<test;i++){

        int pair1;
        cin>>pair1;

        draw[dno]=pair1+1;
        //cout<<draw[dno];

        dno++;
    }
    //cout<< dno;
    cout<<draw[0];
    cout<<draw[1];
    for(int i=0;i<dno;i++){
            cout<<draw[dno];
    }
    return 0;
}
