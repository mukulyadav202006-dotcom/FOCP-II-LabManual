#include<fstream>
using namespace std;
int main()
{
    ofstream file("data.txt");
    file <<"I love computers!";
    file.close();
    return 0;
}