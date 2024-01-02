#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{

    vector<int>vec1={1,2,4,131,53,131,12426,14,131};

    cout<<"The maximum element is: "<<endl;
    int n=*max_element(vec1.begin(),vec1.end());

    cout<<n<<endl;

    cout<<"The minimum element is: "<<endl;

    int m=*min_element(vec1.begin(),vec1.end());

    cout<<m<<endl;

}
