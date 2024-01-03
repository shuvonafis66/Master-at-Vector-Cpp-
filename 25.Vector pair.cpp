#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<pair<int,int>>vec1;

    vec1.push_back({1,3});
    vec1.emplace_back(4,5);//no need to give curly bases in terms of emplace_back and it is faster than push back.

    cout<<vec1[1].second;

    return 0;

}
