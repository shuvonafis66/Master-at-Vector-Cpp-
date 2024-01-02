#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec3 = {1, 2, 3};

    cout<<"Before inserting new elements the size and the capacity are: "<<endl;

    cout << "The size of the vector is: " << vec3.size() << endl;
    cout << "The capacity of the vector is: " << vec3.capacity() << endl;

    vec3.push_back(5);
    vec3.push_back(8);
    vec3.push_back(9);
    vec3.push_back(10);

    cout<<"After inserting new elements the size and the capacity are: "<<endl;

    cout << "The size of the vector is: " << vec3.size() << endl;
    cout << "The capacity of the vector is: " << vec3.capacity() << endl;



    return 0;
}


