//Day 16: Exceptions - String to Integer

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <iostream> 
#include <sstream> 
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin>>s;
    int a;
    try{
        a = stoi(s);
        cout<<a;
    }
    catch(invalid_argument){
        cout<<"Bad String";
    }
    return 0;
}