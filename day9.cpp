//Day 9: Recursion 3

#include <bits/stdc++.h>

using namespace std;

int factorial(int n){
    int m;
    if(n == 0){
        return 1;
    }else{
        for(int i = 0; i<n; i++){
            return n* (factorial(n-1));
        }
    }
}


// Complete the factorial function below.
int main(){
    int n;
    cin>>n;
    int result = factorial(n);
    cout<<result;
}