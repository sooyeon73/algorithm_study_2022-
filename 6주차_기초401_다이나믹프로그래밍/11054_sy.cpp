#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> num(n);
    vector<int> i(n); //증가
    vector<int> d(n); //감소
    for(int i=0 ;i<n; i++)
        cin>> num[i];
    
    
    // i번째를 시작으로 감소하는 부분 배열
    d[n-1]=1; // 맨 뒤에서 부터 탐색
    for(int i=n-2 ; i>=0; i--){
    d[i]=1;
    for(int k=n-1; k>i; k--){
        if(num[i]>num[k]){
            if(d[i]<d[k]+1)
                d[i]=d[k]+1;
        }
    }
    }
    
    // i번째를 끝으로 증가하는 부분 배열
    i[0]=1; // 맨 앞에서 부터 탐색
    for(int t=1 ; t<n; t++){
    i[t]=1;
    for(int k=0; k<t; k++){
        if(num[k]<num[t]){
            if(i[t]<i[k]+1)
                i[t]=i[k]+1;
        }
    }
    }
    
    // i번째를 끝으로 증가 하는 부분 배열 + i번째를 시작으로 감소하는 부분 배열
    // i번째 중복 : -1
    int ans= d[0]+i[0]-1;
    for(int t=0; t<n; t++){
        if(ans<d[t]+i[t]-1)
            ans=d[t]+i[t]-1;
    }
    cout<<ans;
    
}
