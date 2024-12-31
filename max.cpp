//Maximum between three numbers

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>> a >> b >> c;

    if (a>b)
    {
        if (a>c)
        {
            cout<< "The maximum integer is " << a << endl;
        }
        else 
        {
            cout<< "The maximum integer is " << c << endl;
        }
    }
    else
    {
        if (b>c)
        {
            cout<< "The maximum integer is " << b << endl;
        }
        else 
        {
            cout<< "The maximum integer is " << c << endl;
        }
    }
}