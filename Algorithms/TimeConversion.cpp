//Time Conversion

#include <bits/stdc++.h>
#include <string>
#include <sstream>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string h, hrs;
    for(int i = 0; i<2; i++){
        hrs.push_back(s[i]);
        }
    if(s[8] == 'A'){
        if(hrs == "12"){
            for(int i = 0 ; i< s.size()-2; i++){
                (i<2) ? h.push_back('0'): h.push_back(s[i]);
            }
        }else{
            for(int i = 0; i<s.size()-2; i++){
                h.push_back(s[i]);
            }
        }
    }else{
        if(hrs == "12"){
            for(int i = 0 ; i< s.size()-2; i++){
                h.push_back(s[i]);
            }
        }else{
            int c = stoi(hrs) + 12;
        string conv = static_cast<std::ostringstream*>(&(std::ostringstream() << c))->str();
        for(int i = 0; i< s.size()-2;i++){
            (i<2) ? h.push_back(conv[i]): h.push_back(s[i]);
        }
        }
    }
    return h;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
   