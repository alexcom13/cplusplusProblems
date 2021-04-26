//verseion 1, separandolo en funcion y main

void op(int q){
    set<int>s;
    for(int i = 0; i<q; i++){
        int a,b;
        cin>>a>>b;
        if(a == 1){
            s.insert(b);
        }
        if(a == 2){
            s.erase(b);
        }
        if(a == 3){
            auto itr = s.find(b);
            if(itr == s.end()){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}

int main(){
    int q;
    cin>>q;
    op(q);
}

//version 2, todo dentro del main

int main(){
    int q;
    cin>>q;
    set<int>s;
    for(int i = 0; i<q; i++){
        int a,b;
        cin>>a>>b;
        if(a == 1){
            s.insert(b);
        }
        if(a == 2){
            s.erase(b);
        }
        if(a == 3){
            auto itr = s.find(b);
            if(itr == s.end()){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
} 
