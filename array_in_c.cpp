//array program to c++
#include<iostream>
using namespace std;    
int main()
{
    int a[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"enter the value of array"<< i <<endl;
        cin>>a[i];
    }
    cout<<"the array is"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}