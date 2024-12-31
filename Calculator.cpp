#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        char choice;
        cout<<"Enter your choice(+,-,*,/)\nEnter 'x' to exit";
        cin>>choice;
        if (choice == 'x')
        {
            return 0;
        }
        cout<<endl;
        float x,y;
        cout<<"Enter two numbers:- ";
        cin>>x>>y;
        cout<< endl;

        switch (choice)
        {
        case '+':
            cout<<x<<"+"<<y<<"="<<x+y<<endl;
            break;
        case '-':
            cout<<x<<"-"<<y<<"="<<x-y<<endl;
            break;
        case '*':
            cout<<x<<"*"<<y<<"="<<x*y<<endl;
            break;
        case '/':
            cout<<x<<"/"<<y<<"="<<x/y<<endl;
            break;
        default:
            cout<<"Enter a Valid Operator"<<endl;
            break;
        }
        cout<<endl;
    }
    return 0;
}