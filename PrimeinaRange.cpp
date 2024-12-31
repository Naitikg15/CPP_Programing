#include <iostream>
using namespace std;

int main()
{
    int range;
    cin>>range;
    for (int i=2; i< range;i++)
    {
        int isPrime=1;
        for (int j=2; j<=i/2; j++)
        {
            if (i%j==0)
            {
                isPrime=0;
            }
        }
        if (isPrime)
        cout<<i<<endl;
    }
}