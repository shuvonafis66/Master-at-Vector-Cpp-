#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec1(5,200);

    vec1.insert(vec1.begin()+2,2,100);


    cout<<"The elements are: "<<endl;

    for(auto i:vec1)
    {
        cout<<i<<" ";
    }
    return 0;


}

