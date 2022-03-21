//11055와 같음

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> num(n);
    vector<int> d(n);
    for(int i=0 ;i<n; i++)
        cin>> num[i];
    
    d[0]=1;
    
    for(int i=1 ; i<n; i++){
    d[i]=1;
    for(int k=0; k<i; k++){
        if(num[k]>num[i]){
            if(d[i]<d[k]+1)
                d[i]=d[k]+1;
        }
    }
    }
    
    int ans=d[0];
    for(int i=0; i<n; i++){
        if(d[i]>ans)
            ans=d[i];
    }
    cout<<ans;

}
