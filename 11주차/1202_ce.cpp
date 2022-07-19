#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, K;
long long ans;
vector<pair<int, int>> jewel;
vector<int> bag;
priority_queue<int> pq;

int main(){
    scanf("%d %d", &N, &K);
    for(int i=0; i<N; i++){
        int m, v;
        scanf("%d %d", &m, &v);
        jewel.push_back({m, v});
    }
    sort(jewel.begin(), jewel.end());
    for(int i=0; i<K; i++){
        int c;
        scanf("%d", &c);
        bag.push_back(c);
    }
    sort(bag.begin(), bag.end());
    int idx = 0;
    
    for(int i=0; i<K; i++){
        while(idx < N && jewel[idx].first <= bag[i]){
            pq.push(jewel[idx++].second);
        }
        if(!pq.empty()){
            ans += (long long) pq.top();
            pq.pop();
        }
    }
    
    printf("%lld", ans);
}
