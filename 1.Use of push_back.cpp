#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // Declare variables
    int n, value;
    vector<int> vec1;

    // Prompt user for the number of elements to store in the vector
    cout << "How many elements you want to store in vector: " << endl;
    cin >> n;

    // For taking input from the user and adding elements to the vector
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element number " << i + 1 << ": " << endl;
        cin >> value;
        vec1.push_back(value);
    }

    // For printing the elements of the vector
    for (int i = 0; i < n; i++)
    {
        cout << "The element number " << i + 1 << " is = " << vec1[i] << endl;
    }

    return 0;
}
