#include<iostream>
#include<vector>

using namespace std;


int main()
{

    vector<int>vec1={1,2,3,4,6,6};


     vec1.erase(vec1.begin()+3);//3 is the index.

    //printing elements after erase all elements;

    for(int i=0;i<vec1.size();i++)
    {
        cout<<" "<<vec1[i];
    }
    return 0;
}

