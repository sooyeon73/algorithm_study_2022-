//long long 사용해야
//더할 때마다 mod 연산

#include<iostream>
#include<vector>
#include<tuple>
using namespace std;
int main (){
    int t;
    cin>>t;
    vector<int> n(t);
    int max=0;
    for(int i=0; i<t; i++){
        cin>> n[i]; // 입력 n
        if(n[i]>max)max=n[i];
    }
    
    vector<long long int> d(max+1);
    vector<tuple<long long int,long long int,long long int>> last(max+1);
    
    d[1]=1; last[1]=make_tuple(1,0,0); //마지막 숫자가 123인 횟수 저장
    d[2]=2; last[2]=make_tuple(0,1,0);
    d[3]=3; last[3]=make_tuple(1,1,1);
    
    for(int i=4 ; i<=max ; i++){
        //마지막 숫자가 본인이 아닌 경우에만 +
        get<0>(last[i])=(get<1>(last[i-1])+get<2>(last[i-1]))%1000000009; //+1
        get<1>(last[i])=(get<0>(last[i-2])+get<2>(last[i-2]))%1000000009; //+2
        get<2>(last[i])=(get<0>(last[i-3])+get<1>(last[i-3]))%1000000009; //+3
    }


    for(int i=0; i<t;i++){
        cout<<((((get<0>(last[n[i]])+get<1>(last[n[i]]))%1000000009)+get<2>(last[n[i]]))%1000000009)<<"\n";
        //+마다 mod연산
    }
    return 0;
}

