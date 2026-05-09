#include <iostream>
#include <string>
using namespace std;
class vehicle
{
protected:
    int year;
    string brand;

public:
    vehicle(int y, string b)
    {
        year = y;
        brand = b;
        cout << "Vehicle constructor called." << endl;
    }

    ~vehicle(){
        cout<<"Vehicle destructor called."<<endl;
    }
    
};

class car : public vehicle {
    private:
    string model;
    int seating_capacity;

    public:
    car(int y, string b, string m, int s) : vehicle(y, b) {
        model = m;
        seating_capacity = s;
        cout << "Car constructor called." << endl;
    }

    ~car(){
        cout<<"Car destructor called."<<endl;
    }+=6        
};