#include <bits/stdc++.h>
#include<vector>
#include<string.h>
#include<map>
using namespace std;

void check(vector<char> s, vector<char> t){
    map<char, char>m;
    bool a;
    for(int i = 0; i<s.size(); i++){
        if(s.at(i) == t.at(i)){
            m.insert(make_pair(s.at(i),s.at(i)));
        }
        if(s.at(i) == "*"){
            a = true;
        }
    }
    if(!a){
        bool b;
        for(int i = 0; i<t.size(); i++){
            int cont1 = 0;
            itr = m.find(t.at(i))
            if(itr != m.end()){
                cont1++;
            }else{
                b = true;
            }
        }
        if(b){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    }else{
        cout<<"YES";
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<char> s,t;
    string c, h;
    cin>>c;
    for(int i = 0; i<n; i++){
        s.push_back(c[i]);
    }
    cin>>h; 
    for(int i = 0; i<m; i++){
        t.push_back(h[i]);
    }

}