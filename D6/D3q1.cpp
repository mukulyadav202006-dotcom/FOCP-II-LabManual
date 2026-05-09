#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cout << "Enter two strings: ";
    cin >> a >> b;
    int count[26] = {0};
    for (int i = 0; i < a.length(); i++)
    {
        count[a[i] - 'a']++;
        count[b[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            cout << "Not anagram";
            return 0;
        }
    }
     cout << "Anagrams";
     return 0;
}