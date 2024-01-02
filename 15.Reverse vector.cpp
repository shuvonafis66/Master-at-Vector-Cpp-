#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>vec1={1,2,3146,10,11,23,45};

     for(auto it=vec1.rbegin();it!=vec1.rend();it++)
    {
        cout<<" "<<*it;
    }

    return 0;
}
