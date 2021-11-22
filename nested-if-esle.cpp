// nested if else statement cpp
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b)
    {
            cout<<"a is greater than b";
    }
    else
    {
        if(a<b)
            cout<<"a is less than b";
        else
            cout<<"a is equal to b";
    }
    return 0;
}