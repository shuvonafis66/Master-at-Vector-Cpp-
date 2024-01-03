#include<iostream>
using namespace std;

int main()
{
    pair<int, int>e={1,5};

    cout<<"The first element of the pair is: "<<e.first<<endl;
    cout<<"The second element of the pair is: "<<e.second<<endl;


    pair<int,pair<int,int>>f={1,{2,3}};
    cout<<"The first element of the pair is: "<<f.first<<endl;
    cout<<"The first element of the second pair is: "<<f.second.first<<endl;
    cout<<"The first element of the second pair is: "<<f.second.second;




    return 0;
}
