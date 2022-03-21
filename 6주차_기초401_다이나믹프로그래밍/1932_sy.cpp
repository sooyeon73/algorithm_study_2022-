#include <iostream>
using namespace std;
int num[501][501];
int d[501][501];

int main(){
    int n;
    cin >>n;
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cin>>num[i][j];
        }
        
    }
    d[1][1]=num[1][1];
    d[2][1]=d[1][1]+num[2][1];
    d[2][2]=d[1][1]+num[2][2];
    
    for(int i=3; i<=n;i++){
        d[i][1]=d[i-1][1]+num[i][1];
        for(int k=2; k<i;k++)
            d[i][k]=max(d[i-1][k-1],d[i-1][k])+num[i][k];
        d[i][i]=d[i-1][i-1]+num[i][i];
    }
  
  //i번쨰줄의 i번째 칸을 선택했을 때의 최대 값을 누적해서 저장
    
    int max= d[n][1];
    for(int i=1; i<=n; i++){
        if(d[n][i]>max)
            max=d[n][i];
    }
    cout <<max;
}
