#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec1(5,200);

    vector<int>vec2={1,2,3,4,5};


    vec1.swap(vec2);


    cout<<"The elements of vector 1 are: "<<endl;

    for(auto i:vec1)
    {
        cout<<i<<" ";
    }

    cout<<endl;

      cout<<"The elements of vector 2 are: "<<endl;

    for(auto i:vec2)
    {
        cout<<i<<" ";
    }


    return 0;


}


