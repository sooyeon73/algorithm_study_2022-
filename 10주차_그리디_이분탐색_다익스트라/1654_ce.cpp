#include <stdio.h>
#include <algorithm>

using namespace std;
 
long long K, N, max_len;
int ans;
long long len[10001];

bool check(long long val){
    int cnt = 0;
    for(int i=0; i<K; i++){
        cnt += len[i]/val;
        if(cnt >= N) return true;
    }
    
    return false;
}
 
int main() {
    scanf("%lld %lld", &K, &N);
    for(int i=0; i<K; i++){
        scanf("%lld", &len[i]);
        max_len = max(len[i], max_len);
    }
    
    long long l = 1, r = max_len;
    while(l <= r){
        long long mid = (l+r)/2;
        if(check(mid)){
            l = mid + 1;
            if(ans < mid) ans = mid;
        }
        else {
            r = mid - 1;
        }
    }
    
    printf("%d", ans);
}
