#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec1={1,2,3,8,34,3536};

    vec1.erase(vec1.begin()+2,vec1.begin()+4);// 4 means before the end.

    for(auto it:vec1)
    {
        cout<<it<<" ";
    }

    return 0;
}
