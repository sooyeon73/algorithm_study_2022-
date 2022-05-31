#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

int N, M, s, e, max_cost, ans;
bool visited[10001];
vector<pair<int, int>> graph[10001];

bool bfs(int w){
    queue<int> q;
    memset(visited, false, sizeof(visited));
    q.push(s); visited[s] = true;
    
    while(!q.empty()){
        int tmp = q.front(); q.pop();
        if(tmp == e) return true;
        
        for(auto i : graph[tmp]){
            if(!visited[i.first] && w <= i.second){
                q.push(i.first);
                visited[i.first] = true;
            }
        }
    }
    
    return false;
}

int main(){
    scanf("%d %d", &N, &M);
    for(int i=0; i<M; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
        max_cost = max(max_cost, c);
    }
    scanf("%d %d", &s, &e);
    
    int low = 1, high = max_cost;
    while(low <= high){
        int mid = (low + high)/2;
        if(bfs(mid)){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    
    printf("%d", ans);
}
