#include<iostream>
#include<string>
using namespace std;

void car()
{
    cout << "This is a car" << endl;
}
void car(string color)
{
    cout << "This is a " << color << " color car" << endl;
}
void car(string color, string model)
{
    cout << "This is a " << color << " " << model << " car" << endl;
}
int main()
{
    car();
    car("red");
    car("red", "BMW");
    return 0;
}
