#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>vec1={1,2,3146,10,11,23,45};

    cout<<"Sorting the vector in decreasing order "<<endl;

    sort(vec1.begin(),vec1.end());

     for(auto it=vec1.rbegin();it!=vec1.rend();it++)
    {
        cout<<" "<<*it;
    }

    cout<<endl;

    cout<<"Sorting the vector in increasing order "<<endl;

    //sort(vec1.rbegin(),vec1.rend());

     for(auto it=vec1.begin();it!=vec1.end();it++)
    {
        cout<<" "<<*it;
    }




    return 0;
}
