#include <stdio.h>
#include <string>
using namespace std;
string int_to_bin(int n){
    int tmp=n;
    int bin=0;
    while (n>0)
    {
        bin=bin*10+tmp%2;
        tmp/=2;
    }
    string(bin);
    
}
int XOR(int n,int x){

}

long sumXOR(int n){

}
