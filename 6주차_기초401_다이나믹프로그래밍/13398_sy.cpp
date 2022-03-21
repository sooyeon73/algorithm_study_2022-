#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> num(n);
    for(int i=0; i<n; i++){
        cin>> num[i];
    }
    
    vector<int> d(n); //그냥 연속합
    vector<int> d_del(n); //한개가 삭제됐을때의 연속함
    
    d[0]=num[0];  
    for(int i=1; i<n; i++){
         d[i]=max(d[i-1]+num[i],num[i]);
    }

    //d_del[i] -> (i-1)번째 수를 삭제했을 때의 연속합 !!!
    d_del[1]=num[1]; // 0번째 수를 삭제한 연속합 -> num[1]
    for(int i=2; i<n;i++){
        d_del[i]=max(d[i-2]+num[i],d_del[i-1]+num[i]);
      // 1. (i-1)를 삭제하고 d[i-2]에 이어 붙이는 경우 
      // 아직 삭제하지 않았어야 하므로 d에서 값 조회
      // 2. d_del[i-1]에 이어 붙이는 경우
      // 이미 삭제가 이뤄졌기 때문에 더 삭제 불가능
    }
    
    int ans =d[0];
  // 두 개를 모두 탐색하며 가장 큰 값 찾기
    for(int i=1; i<n; i++){
        if(d[i]>ans)ans=d[i];
        if(d_del[i]>ans)ans=d_del[i];
    }
    
    cout<<ans;
    

}
