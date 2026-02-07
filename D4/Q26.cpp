#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the marks of 5 subjects: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    float total_marks;
    total_marks = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    float percentage;
    percentage = (total_marks / 5);
    cout << "Total marks: " << total_marks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}