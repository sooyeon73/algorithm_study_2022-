#include <iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> v(n+1);
    
  //buttom-up 방식의 DP
    v[1]=0;
    for(int i=2; i<=n;i++){
        v[i]=v[i-1]+1; // (i-1)에서 더하기1연산(횟수+1)
        if(i%2==0&&v[i]>(v[i/2]+1)) // (i/2)에서 곱하기2연산(횟수+1)
            v[i]=v[i/2]+1;
        if(i%3==0&&v[i]>(v[i/3]+1)) // (i/3)에서 곱하기3연산(횟수+1)
            v[1]=v[i/3]+1;
    }        
    cout<<v[n];
}
