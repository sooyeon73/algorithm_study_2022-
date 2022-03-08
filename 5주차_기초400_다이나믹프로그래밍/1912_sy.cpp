#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> num(n+1);
    
    for(int i=1;i<=n;i++)
        cin>>num[i];
    
    long long max =num[1];
    long long d[100001];

    //d[i]= i까지의 연속합의 최대 값
    d[1]=num[1];
    for(int i=2; i<=n; i++){
      //d[i]=max(num[i], d[i-1]+num[i])
        d[i]=num[i]; // 자신이거나
        if(d[i]<d[i-1]+num[i]) //그전까지의 연속합에 자신을 더한 값
            d[i]=d[i-1]+num[i];
        if(d[i]>max) max=d[i];
    }
    
    cout<<max;
    return 0;
}
