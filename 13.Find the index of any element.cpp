#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{

    vector<int>vec1={1,2,3,4,5,6,2,1,131,13};

    auto i=find(vec1.begin(),vec1.end(),131)-vec1.begin();
    cout<<"The index of the element is: "<<i;

    return 0;
}
