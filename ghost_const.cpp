#include<iostream>

using namespace std;

static int i=1;

class Ghost{

    int age;


    public:

    int num_scare_human;


    Ghost(){

        age=i;
        num_scare_human=0;

    }
    int get_age(){

        return age;
    }

    int get_num_scare(){

        return num_scare_human;
    }
    void incre_i(){

            i++;
     }

};
class C_day{

    public:

    int  ghost_num;
    int num_consistency;
};

C_day compare_ghost_object(Ghost g[],int m){

    int maximum=g[0].num_scare_human;
    C_day c1;
    for(int i=1;i<m;i++){
        if(maximum<g[i].num_scare_human){
            maximum=g[i].num_scare_human;
        }

    }
    for(int i=0;i<m;i++){
        if(g[i].num_scare_human==maximum){

                c1.ghost_num=g[i].get_age();
                c1.num_consistency=g[i].num_scare_human;
        }

    }

    return c1;

}


int main(){

    int N,M;
    cin >>N;
    cin>>M;
    Ghost g[M];
    C_day c[N];
    for(int i=0;i<M;i++){

        Ghost g1;
        g1.incre_i();
        g[i]=g1;
    }
    for(int i=0;i<N;i++){
            int age;
            cin>>age;
            for(int j=0;j<M;j++){
                if(g[j].get_age()==age){

                        g[j].num_scare_human++;
                }

            }
            C_day c1=compare_ghost_object(g,M);
            c[i]=c1;

    }

    for(int i=0;i<N;i++){

        cout<<c[i].ghost_num;
        cout<<" "<<c[i].num_consistency;
        cout<<endl;

    }


}
