#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector vec= {1,2,3,4,5,6,7,8,9,10};
    cout<<"size of vector:"<<vec.size()<<endl;
    vec.push_back(11);
    cout<<"size of vector after pushback:"<<vec.size()<<endl;
    for (auto itr: vec){
        cout<< itr<< endl;
    }
    cout<<endl;
    cout<<vec.at(5);
}