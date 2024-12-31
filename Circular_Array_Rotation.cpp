#include <bits/stdc++.h>

using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries){
    int n= a.size();
    k=k%n;
    a.reverse(a.begin(), a.end());
    a.reverse(a[0],a[k-1]);
    a.reverse(a[k],a[n-1]);
    vector <int>result;
    for (int q:queries){
        result.push_back(a[q]);
    }
    return result;
}