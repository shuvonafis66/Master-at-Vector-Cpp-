#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};

    vec1.emplace_back(1);
    vec1.emplace_back(2);
    vec1.emplace_back(200);
    vec1.emplace_back(3);
    vec1.emplace_back(4);
    vec1.emplace_back(5);
    vec1.emplace_back(300);
    vec1.emplace_back(700);
    vec1.emplace_back(1000);

    cout << "After updating the elements are: " << endl;
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }

    return 0;
}

