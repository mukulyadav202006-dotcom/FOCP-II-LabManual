#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int count = 0;
    cout << "Enter the 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(arr[i]%3==0 && arr[i]%5==0){
            count++;
            //cout<<arr[i]<<" is divisible by both 3 and 5"<<endl;
        }
    }
    cout<<"Total numbers divisible by both 3 and 5 is: "<<count<<endl;
    return 0;
}