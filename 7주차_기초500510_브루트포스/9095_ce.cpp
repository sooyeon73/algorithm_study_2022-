#include <stdio.h>

int T, n, ans;

void dfs(int sum){
    if(sum == n) ans++;
    if(sum >= n) return;
    
    for(int i=1; i<4; i++){
        dfs(sum + i);
    }
}

int main(){
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d", &n);
        dfs(0);
        printf("%d\n", ans);
        ans = 0;
    }
}
