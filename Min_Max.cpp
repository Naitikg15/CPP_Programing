#include <bits/stdc++.h>
using namespace std;

int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int i=0, j=i+k;
    int min=arr[arr.size()-1]+1;
    while (i<){
        if (arr[j]-arr[i]<min){
            min=arr[j]-arr[i];
        }
        i++;
        j++;
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for (int i=0; i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int k;
    cin>>k;
    cout<<maxMin(k,arr)<<endl;
}