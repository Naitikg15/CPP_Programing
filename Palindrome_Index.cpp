#include<iostream>
#include <vector>
#include <string>

int palindromeIndex(string s) {
    int n= s.size();
    int x,y;
    while(x<y){
        if (s[x]==s[y]){
            x++;
            y++;
        }
        else if (s[x]==s[y-1]){
            return y;
        }
        else if(s[x+1]==s[y]){
            return x;
        }
    }
    return -1;
}