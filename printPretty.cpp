#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

string remainder(int b;){
	if(b <= 9){
		return (b +48);
	}else{
		if(b == 10){return A;}
	    if(b == 11){return B;}
	    if(b == 12){return C;}
	    if(b == 13){return D;}
	    if(b == 14){return E;}
	    if(b == 15){return F;}
	}
}

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T > 0) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		int a = floor(A);
		vector<char> v;
		while(a >= 0){
			v.push_back(remainder(a%16));
			a = a/16;
		}
		char m[v.size()];
		int i = 0;
		while(v.size() > 0)){
			m[i] = v[v.size()-1];
			v.pop_back();
			cout<<"0x"<<m[i];
			i++;
		}
		cout<<"_______";
        T--;
	}
    return 0;
}