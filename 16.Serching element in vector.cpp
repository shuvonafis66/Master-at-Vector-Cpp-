

#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{

    vector<int>vec1={1,2,3,4,5,6,2,1,131,13};
    sort(vec1.begin(), vec1.end());

    cout<<binary_search(vec1.begin(),vec1.end(),13)<<endl;;

    return 0;
}
