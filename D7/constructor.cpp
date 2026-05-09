#include <iostream>
using namespace std;
class triangle
{
public:
    int base, height;

public:
    triangle(int a, int b)
    {
        height = a;
        base = b;
    }
    /*void setdate(int b, int h)
    {
        base = b;
        height = h;
    }*/
    void area()
    {
        cout << "Area of triangle is: " << 0.5 * base * height << endl;
    }
};
int main()
{
    triangle t1(10, 5);
    t1.area();

    triangle t2(0, 0);
    //t2.setdate(20, 10);
    t2.area();
    return 0;
}