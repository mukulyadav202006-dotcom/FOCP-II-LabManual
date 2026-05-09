#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
float divide(int a, int b)
{
    if (b == 0)
    {
        cout << "Error!" << endl;
        return 0;
    }
    else
    {
        return a / b;
    }
}

int main()
{
    int a,b;
    int operation;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Select operation: 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ";
    cin>>operation;
    switch(operation){
        case 1:
            cout<<"Sum: "<<add(a,b)<<endl;
            break;
        case 2:
            cout<<"Difference: "<<subtract(a,b)<<endl;
            break;
        case 3:
            cout<<"Product: "<<multiply(a,b)<<endl;
            break;
        case 4:
            cout<<"Quotient: "<<divide(a,b)<<endl;
            break;
        default:
            cout<<"Invalid operation!"<<endl;
    }
    return 0;
}