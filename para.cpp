#include<iostream>
#include<vector>

using namespace std;

bool check(char * para,int length){

    if(para[0]==')'){

        return false;
    }
    vector<char>v;
    int i=0;
    while(i<length){

        if(para[i]=='('){
            v.push_back(para[i]);
            cout<<"push"<<endl;

        }else{

            v.pop_back();
            cout<<"pop"<<endl;
        }
        i++;
    }
    if(v.empty()==true){

        return true;
    }
    return false;

}

int main(){

    char string1[]="(())";
    if(check(string1,5)){

        cout<<"its a valid stringQW34E
    }else{

        cout<<"its invalid string";
    }
}
