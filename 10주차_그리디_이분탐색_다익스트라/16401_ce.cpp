#include <stdio.h>
#include <algorithm>

using namespace std;

int M, N, len[1000000];

bool check(int num){
    int cnt = 0;
    for(int i=0; i<N; i++)
        cnt += len[i]/num;
    
    if(cnt >= M) return true;
    return false;
}

int main(){
    scanf("%d %d", &M, &N);
    for(int i=0; i<N; i++){
        scanf("%d", &len[i]);
    }
    sort(len, len+N);
    
    int l = 1, r = len[N-1], ans = 0;
    while(l <= r){
        int mid = (l+r)/2;
        if(check(mid)){
            ans = mid; l = mid + 1;
        }
        else
            r = mid - 1;
    }
    printf("%d", ans);
}
