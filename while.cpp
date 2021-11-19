// while loop in c++
#include <iostream>
using namespace std;
int main()
{
    int i;
    char c;
    i = 0;
    cout << "Enter a character: ";
    cin >> c;
    while (i < 3)
    {
        cout << c << endl;
        i++;
    }
}