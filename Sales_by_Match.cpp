#include <bits/stdc++.h>
#include <vector>

using namespace std;

int sockMerchant (int n, vector <int> ar){
    unordered_map <int, int> map1;
    for (int sock :ar){
        map1[sock]++;
    }
    int pairs=0;
    for (auto a: map1){
        pairs+=a.second/2;
    }
    return pairs;
}

int main(){
    int n;
    vector <int> ar;
    scanf ("%d", &n);
    for (int i=0;i<n;i++){
        int s;
        scanf("%d", &s);
        ar.push_back(s);
    }
    int ans;
    ans=sockMerchant (n, ar);
    printf("%d", ans);
}