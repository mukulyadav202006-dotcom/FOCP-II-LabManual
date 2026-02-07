#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int largest=0;
    int second_largest=0;
    cout << "Enter the 5 stock values: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }
    }
    cout<<"The largest stock value is: "<<largest<<endl;
    cout<<"The second largest stock value is: "<<second_largest<<endl;
    return 0;
}