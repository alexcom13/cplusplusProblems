void des( string s){
    vector<char> p,im;
    for(int j = 0; j<s.size(); j++){
        if( j % 2 == 0){
            p.push_back(s[j]);
        }else{
            im.push_back(s[j]);
        }
    }
    for(int n = 0; n<p.size(); n++){
        cout<<p.at(n);
    }
    cout<<" ";
    for(int n = 0; n<im.size(); n++){
        cout<<im.at(n);
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        string s;
        cin>>s;
        des(s);
    }
} 
