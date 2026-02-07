#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter any 5 number: ";
    int even = 0, odd = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
    }
    cout<<"Sum of even numbers: "<<even<<endl;
    cout<<"Sum of odd numbers: "<<odd<<endl;
    return 0;
}