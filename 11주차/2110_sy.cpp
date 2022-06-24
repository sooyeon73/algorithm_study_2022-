#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, c;
vector<int> v;
bool checking(int dis){
    //가장 인접한 두 공유기 사이의 거리 = n
    //일 때 공유기 c 개를 만족하는가
    int cnt =1; 
    int prev = v[0];
    for(int i=1; i<n; i++){
        if(v[i]-prev>=dis)
        {
            cnt++;
            prev=v[i];
        }
    }
    
    //c 이내면 ok
    if(cnt>=c)
        return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>c;
   
    for(int i=0; i<n;i++){
        int nn;
        cin>>nn;
        v.push_back(nn);
    }
    
    //sort 필요함
    sort(v.begin(), v.end());
    
    int low =1;
    int high = v[n-1]-v[0];
    int ans=0;
    while(low<=high){
        int mid = (low+ high)/2;
        if(checking(mid)){ // 만족 -> 더 큰 쪽 탐색
            ans=max(ans,mid);
            low= mid+1;
        }
        else
            high=mid-1;    
    }
    cout<<ans;
    
}