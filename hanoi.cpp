# include <iostream>

using namespace std;

void hanoi(int num_disk, char source,char dest,char spare){

    if(num_disk==1){
        cout<<"Move Disk"<<num_disk<<"from"<<source<<"to"<<dest<<endl;
        }else{

        hanoi(num_disk-1,source,spare,dest);
        cout<<"Move Disk"<<num_disk<<"from"<<source<<"to"<<dest<<endl;
        hanoi(num_disk-1,spare,dest,source);
        }
        }
    int main(){

            hanoi(5,'A','B','C');
            return 0;
    }
