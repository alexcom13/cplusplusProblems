#include <iostream>
#include <cstdio>
using namespace std;

void detect(int numero){
    if(numero >=1 && numero <=9){
        if(numero == 1){cout<<"one"<<endl;}
        if(numero == 2){cout<<"two"<<endl;}
        if(numero == 3){cout<<"three"<<endl;}
        if(numero == 4){cout<<"four"<<endl;}
        if(numero == 5){cout<<"five"<<endl;}
        if(numero == 6){cout<<"six"<<endl;}
        if(numero == 7){cout<<"seven"<<endl;}
        if(numero == 8){cout<<"eight"<<endl;}
        if(numero == 9){cout<<"nine"<<endl;}
    }
    if(numero > 9){
        if(numero % 2 == 0){
            cout<<"even"<<endl;
        }else{
            cout<<"odd"<<endl;
        }
    }
}

int main() {
    int a, b;
    cin>>a;
    cin>>b;
    for(int numero = a; numero <= b; numero++){
        detect(numero);
    }
    return 0;
}