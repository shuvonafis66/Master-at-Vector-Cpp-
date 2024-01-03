#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec1={1,2,3,4,5,5};
    vector<int>vec2(vec1);


    cout<<"Printing the elements of vector 2: "<<endl;
    for(auto i=vec2.begin();i!=vec2.end();i++)//vec2.begin and vec2.end is basically the elements address of these elements.
    {
        cout<<*i<<" ";//to convert adress to elements we are using *i
    }

    return 0;

}
