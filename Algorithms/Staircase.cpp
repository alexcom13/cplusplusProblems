//Staircase

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(int i = 1; i<=n; i++){
        int v = n-i;
        while(v >0){ cout<<
        " ";
        v--;}
        for(int j = 0; j<i; j++){
            cout << setw(1) << left << "#";
        }
        cout<<endl;
    }  
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
