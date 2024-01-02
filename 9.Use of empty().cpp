//Check a vector is empty of not..if empty it returns 1 , if not it return 0;

#include<iostream>
#include<vector>

using namespace std;

int main()
{

    //Before empty
    vector<int>vec1 = {1, 2, 3, 4, 5, 6, 7, 13, 25};

    cout<<vec1.empty()<<endl;

    //After empty

    vector<int>vec2 = {};

    cout<<vec2.empty();

    return 0;
}

