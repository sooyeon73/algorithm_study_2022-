#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    int n; 
    cin >> n;
    vector<int> d(n+1);
    
    d[1]=1;
    d[2]=3;// =, ||, ㅁ
    for(int i=3; i<=n; i++){
        d[i]=(d[i-1]+d[i-2]*2)%10007;
      
      //d[i-1]에 세로 1개를 붙이는 경우
      //d[i-2]에 가로2개=를 붙이거나, ㅁ를 붙이거나 2경우
    }
    
    cout<<d[n];
}
