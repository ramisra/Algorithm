#include<iostream>
#define N 4
using namespace std;
void print(int sol[N][N]){

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<sol[i][j];
        }
        cout<<endl;
    }
}
bool is_safe(int x,int y,int maze[N][N]){

        if((x>=0 && x<N)&& (y>=0 && y<N) && maze[x][y]==1)
                    return true;
    return false;
}
bool maze_util(int x,int y,int sol[N][N],int maze[N][N]){

    if(x==N-1 && y==N-1){
        sol[x][y]=1;

        return true;

    }else{
            sol[x][y]=1;
        if(is_safe(x+1,y,maze)){

            maze_util(x+1,y,sol,maze);
            }
            if(is_safe(x,y+1,maze)){

            maze_util(x,y+1,sol,maze);
            }

            return true;

        }


    return false;
}

int maze_sol(int maze[N][N])
{

    int sol[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            sol[i][j]=0;
        }
    }
    if(maze_util(0,0,sol,maze)==false){
        cout<<"Path doesn't exist";
    }else{
        print(sol);
    }

}
int main(){

    int maze[N][N]  =  { {1, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 1, 1, 0},
        {1, 1, 1, 1}
    };
    maze_sol(maze);

    return 0;

}
