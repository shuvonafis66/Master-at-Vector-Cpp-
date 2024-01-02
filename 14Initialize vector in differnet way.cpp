//Searching a element is there or not...bool value determined.


#include<iostream>
#include<vector>

using namespace std;


int main()
{
    vector<int>vec1(5,10);

    cout<<"The elements are: "<<endl;

    for(int i =0;i<vec1.size();i++)
    {
        cout<<" "<<vec1[i];
    }

    return 0;
}
