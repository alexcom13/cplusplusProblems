#include <bits/stdc++.h>
using namespace std;

void o(){
    for(int i = 0; i < 150; i++){
        cout<<"#";
    }
}
void cono(){
    for(int i = 0; i < 50; i++){
        int j = i;
        cout<<"#";
        while(j < 50){
            cout<<" ";
            j++;
        }
        cout<<"#";
    }
}

int main() {

	ios::sync_with_stdio(0);
    cin.tie(0);
    o();

    return 0;
}