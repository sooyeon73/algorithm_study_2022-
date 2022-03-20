#include <iostream>
#include<vector>
using namespace std;
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int T;
    cin >> T;
    vector<long long> input(T);
    
    long long max= 0;
    for(int i =0 ; i<T; i++){
        long long n;
        cin>>n;
        input[i]=n;
        if (n>max) max=n;
    }
    vector<long long> d(max+1);
    
    d[1]=1;  //1
    d[2]=2; // 1 1   2
    d[3]=4; //111 12 21 3
    for(int i=4; i<=max; i++){
        d[i]=(d[i-1]+d[i-2]+d[i-3])%1000000009;
    }
    for(int i=0; i<T;i++){
       cout<< d[input[i]]<<'\n';
    }
    return 0;
}
