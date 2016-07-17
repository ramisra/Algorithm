#include<iostream>
#define N 4
using namespace std;

bool is_safe(int sol[N][N],int x,int y){

    if((x>=0 && x<=N)&&(y>=0 && y<=N) && sol[x][y]==-1)
        return true;
    return false;
}

void print(int sol[N][N]){

    for(int i=0;i<N;i++){

        for(int j=0;j<N;j++){

            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool solveUtil(int x,int y,int curr_mov,int sol[N][N],int *x_move,int *y_move){
    if(curr_mov==N*N){
        return true;
    }else{
    for(int k=0;k<8;k++){
        int next_x=x+x_move[k];
        int next_y=y+y_move[k];

        if(is_safe(sol,next_x,next_y)){
            sol[next_x][next_y]=curr_mov;

            if(solveUtil(next_x,next_y,curr_mov+1,sol,x_move,y_move)==true){
                return true;
            }else{
                sol[next_x][next_y]=-1;
            }

        }

    }
    }
    return false;

}
void solve(){

    int sol[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            sol[i][j]=-1;
        }
    }
     int x_move[4] = {  2, 1, -1, -2 };
    int y_move[4] = {  1, 2,  2,  1 };

    sol[0][0]=0;
    if(solveUtil(0,0,1,sol,x_move,y_move)==true){

        print(sol);
    }else{

        cout<<"Solution doesn't exist";
    }
}

int main(){

solve();

return 0;

}
