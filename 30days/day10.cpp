//Day 10: Binary Numbers

#include<bits/stdc++.h>
using namespace std;

int bin(int n){
    vector<int> binN;
    while(n > 0){
        binN.push_back(n%2);
        n = n/2;
    }
    int cont[binN.size()] = {0};
    int j = 0;
    for(int i = 0; i<binN.size(); i++){
        if(binN.at(i) == 1){
            cont[j]++;
        }else{
            j++;
        }
    }
    int contB = 0;
    for(int i = 0; i<binN.size(); i++){
        if( cont[i] > contB){
            contB = cont[i];
        }
    }
    return contB;
}

int main(){
    int n;
    cin>>n;
    cout<<bin(n);

}