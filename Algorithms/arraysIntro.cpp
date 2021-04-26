

int main(){
    int N;
    cin>>N; 
    int m[N];
    for(int i = 0; i<N; i++){
        cin>>m[i];
    }
    int j = N-1;
    while(j >= 0){
        cout<<m[j];
        j--;
    }
    return 0;
}
