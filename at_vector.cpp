# include<iostream>
#include <vector>


int main()

{

    std::vector <int> v;

    v.assign(5,1);
    v.at(3)=2;

    std::cout<<v[3];

}
