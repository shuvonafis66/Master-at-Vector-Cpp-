#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 13, 25};

    cout << "The elements are: " << endl;

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << " " << vec1.at(i);
    }

    return 0;
}
