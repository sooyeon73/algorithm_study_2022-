#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int N, K, cnt;
int pre[100001];
bool visited[100001];

void bfs(){
    bool flag = false;
    queue<int> q;
    q.push(N);
    visited[N] = true;
    while(!q.empty()){
        int s = q.size();
        for(int i=0; i<s; i++){
            int cur = q.front(); q.pop();
            if(cur == K){
                flag = true; break;
            }
            if(cur < 100000 && !visited[cur + 1]){
                q.push(cur + 1);
                pre[cur + 1] = cur;
                visited[cur + 1] = true;
            }
                
            if(cur > 0 && !visited[cur - 1]){
                q.push(cur - 1);
                pre[cur - 1] = cur;
                visited[cur - 1] = true;
            }
                
            if(cur <= 50000 && !visited[cur * 2]){
                q.push(cur * 2);
                pre[cur * 2] = cur;
                visited[cur * 2] = true;
            }
        }
        if(flag) break;
        cnt++;
    }
}

int main(){
    scanf("%d %d", &N, &K);
    bfs();
    printf("%d\n", cnt);
    
    int idx = K;
    vector<int> ans;
    ans.push_back(K);
    for(int i=0; i<cnt; i++){
        idx = pre[idx];
        ans.push_back(idx);
    }
    reverse(ans.begin(), ans.end());
    for(int e:ans)
        printf("%d ", e);
}
