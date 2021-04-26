#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin>>n>>q;
    vector<int> a[n];
    for(int i = 0; i<n; i++){
        int b;
        cin>>b;
        for(int j = 0; j<b; j++){
            int c;
            cin>>c;
            a[i].push_back(c);
        }
    }
    while(q>0){
        int b,c;
        cin>>b>>c;
        cout<<a[b].at(c)<<endl;
        q--;
    }
    return 0;
}