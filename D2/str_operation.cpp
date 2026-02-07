#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1 = "Apple";

    cout << "Original string: " << str1 << endl;
    cout << "\nLength of string: " << str1.length() << endl;
    cout << "string at index 2: " << str1.at(2) << str1[2] << endl;
    str1.append(" Banana");
    cout << "After append: " << str1 << endl;
    str1.insert(5, " and");
    cout << "After insert: " << str1 << endl;
    str1.replace(0, 5, "Orange");
    cout << "After replace: " << str1 << endl;
    str1.erase(6, 4);
    cout << "After erase: " << str1 << endl;
    str1.clear();
    cout << "After clear: " << str1 << endl;
    return 0;
}