#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> n(t);
    int max=0;
    for(int i=0; i<t; i++){
        cin>> n[i]; // 입력 n
        if(n[i]>max)max=n[i];
    }
    
    vector<int> d(max+1);
    d[1]=1; // 1
    d[2]=2; // 11 2
    d[3]=4; // 111 12 21 3
  
  //가장 큰 수의 경우까지 d배열 구해놓기
    for(int i=4; i<=max ; i++){ 
        d[i]= d[i-1]+d[i-2]+d[i-3];
      //d[i-1] +1
      //d[i-2] +2
      //d[i-3] +3
    }
    
    for(int i=0; i<t;i++){
        cout<<d[n[i]]<<"\n";
    }
    return 0;
    
}
