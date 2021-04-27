

int main(){
    int q;
    cin>>q;
    map<string,int>m; //string key 
    while(q > 0){
        int n;
        string s; //the key (name of student)
        cin>>n>>s;
        if(n == 1){
            int d;
            cin>>d;
            auto itr = m.find(s);
            if(itr == m.end()){
                m.insert(make_pair(s,d));
            }else{
                int p;
                p = m[s]+d;
                itr->second = p;
            }
        }
        if(n == 2){
            m.erase(s);
        }
        if(n == 3){
            auto itr = m.find(s);
            if(itr == m.end()){
                cout<<0<<endl;
            }else{
                cout<<m[s]<<endl;
            }
        }
        q--;
    }
    return 0;
}