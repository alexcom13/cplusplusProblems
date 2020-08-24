#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
#include <map>
using namespace std; 


void queries(map<string, int>m){
    for(string line; getline(cin, line);){
        string c = " a";
        cin>>c;
        auto itr = m.find(c);
        if(itr == m.end()){
            cout<<"Not found"<<endl;
        }else{
            cout<<c<<"="<<m[c]<<endl;
        }
    }
}

int main(){
    int N;
    cin>>N;
    map<string, int>m;   
    for(int i = 0; i<N; i++){
        string s;
        int d;
        cin>>s>>d;;
        m.insert(make_pair(s,d));
    }
    // while(c.compare("") != 0){
    //     string c = " a";
    //     cin>>c;
    //     auto itr = m.find(c);
    //     if(itr == m.end()){
    //         if( c == ""){
    //             return 0;
    //         }else{
    //             cout<<"Not found";
    //         }
    //     }else{
    //         cout<<c<<"="<<m[c];
    //     }
    // }
    queries(m);
    return 0;
}