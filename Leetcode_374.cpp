#include <bits/stdc++.h>

using namespace std;

innt guess(int num)[]

int guessNumber(int n) {
    while(true){
        int num=(n+1)/2;
        int ans=guess(num);
        if (ans==0)
        return num;
        else if (ans==1)
        num=(num+1+n)/2;
        else
        num=(1+num-1)/2;
    }
}

int main(){
    int n;
    cin>>n>>;
    cout<<guessNumber(n);
}