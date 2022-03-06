#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> d(n+1);
    
  d[1]=1;
    d[2]=2;
    for(int i=3; i<=n;i++){
        d[i]=(d[i-1]+d[i-2])%10007;
      
      // d[i-1]에 | 세로 한개를 붙이는 경우
      // d[i-2]에 = 가로 두개를 붙이는 경우
      // https://etyoungsu.tistory.com/41 참고
    }
    cout<<d[n];
    return 0;
            
      
}
