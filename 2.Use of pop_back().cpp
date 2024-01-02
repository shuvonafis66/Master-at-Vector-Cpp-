#include<iostream>
#include<vector>

using namespace std;


int main()
{

    vector<int>vec1={1,2,3,4,6,6};


    vec1.pop_back();

    //printing elements after remove last element;

    for(int i=0;i<vec1.size();i++)
    {
        cout<<" "<<vec1[i];
    }
    return 0;
}


