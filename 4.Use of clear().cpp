#include<iostream>
#include<vector>

using namespace std;


int main()
{

    vector<int>vec1={1,2,3,4,6,6};

    vec1.clear();

    //printing elements after clearing all elements;

    for(int i=0;i<vec1.size();i++)
    {
        cout<<" "<<vec1[i];
    }
    return 0;
}
