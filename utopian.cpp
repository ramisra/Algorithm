#include <iostream>
using namespace std;

int height(int n) {

    int i=1,height=1;
    while(i!=n){
        if(i%2==0){
             height=height+1;
             cout<<height;

        }else{
                 height=height*2;
                 cout<<height;
        }
        i++;
    }
    return height+1;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
