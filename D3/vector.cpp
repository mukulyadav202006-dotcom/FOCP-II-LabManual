#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // create a dynamic array (vector)

    // 1 Add elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 2 Print all elements
    cout << "Elements: ";
    for (int x : v)
        cout << x << "";
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << v[i] << " ";
    }

    // 3 Size of vector
    cout << "Size : " << v.size() << endl;

    // 4 Access first and last elements
    cout << "First element: " << v.size() << endl;
    cout << "Last element: " << v.back() << endl;

    // 5 Access elements safely using at()
    cout << "Element at index 1: " << v.at(1) << endl;

    // 6 Remove last element
    v.pop_back();
    cout << "After pop_back: ";
    for (int x : v)
        cout << x << "" << endl;
    
    // 7 Check if empty
    
}