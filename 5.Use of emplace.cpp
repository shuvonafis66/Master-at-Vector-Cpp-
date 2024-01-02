#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec1={1,2,3,4,5};

    vec1.emplace(vec1.begin()+3,200);
    vec1.emplace(vec1.end(),300);
    auto it = vec1.begin() + 2;
    vec1.emplace(it,700);

    cout<<"After updating the elements are: "<<endl;
    for(int i=0;i<vec1.size();i++)
    {

        cout<<vec1[i]<<" ";
    }

    return 0;
}
