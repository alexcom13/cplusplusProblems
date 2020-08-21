


int main(){
    int N;
    cin>>N;
    int m[N];
    for(int i = 0; i<N; i++){
        cin>>m[i];
    }
    int n = N-1;
    while(n >= 0){
        cout<<m[n]<<" ";
        n--;
    }
    return 0;
}