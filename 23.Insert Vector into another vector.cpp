#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec1(5,200);

    vector<int>vec2={1,2,3,4,5};


    vec2.insert(vec2.begin(),vec1.begin(),vec1.end());


    cout<<"The elements are: "<<endl;

    for(auto i:vec2)
    {
        cout<<i<<" ";
    }
    return 0;


}

