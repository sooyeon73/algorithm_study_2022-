#include<iostream>
#include<vector>
using namespace std;
int max(int a, int b){
    if (a>b)
        return a;
    else
        return b;
}
int main() {
    int N;
    cin >> N;
    vector<int> p(N + 1);
    vector<int> d(N + 1 );
    for (int i = 1; i <= N; i++) {
        cin >> p[i];
    }
    
    d[1]=p[1];
    for(int i=2; i<=N; i++){
        for(int k=1; k<=i; k++){
            d[i]=max(d[i],d[i-k]+p[k]);
        }
    }
    cout<<d[N];
}
