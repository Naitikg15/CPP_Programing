#include <bits/stdc++.h>

using namespace std;

int main() { 
    
    stack<int> s1, s2 ;
    
    int query_num ;    
    cin>>query_num ;
    
    int query, data ;  
    
    for (int i=0; i<query_num ; i++){
        cin>>query ;

        if(query==1){
            cin>>data ;
            s1.push(data) ;
        }
        if(query==2){
            if(!s2.empty()){
                s2.pop() ;
            }
            else{
                while (!s1.empty()) {
                    s2.push(s1.top()) ;
                    s1.pop() ;
                }
                s2.pop() ;
            }
        }
        if(query==3){
            if(!s2.empty()){
                cout<<s2.top()<<endl ;
            }
            else{
                while (!s1.empty()) {
                    s2.push(s1.top()) ;
                    s1.pop() ;
                }
                cout<<s2.top()<<endl ;
            }
        }
    }
    
    
    return 0;
}