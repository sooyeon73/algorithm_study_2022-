#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    // 최소 값을 먼저 더해야
    // sorting 이 계속 갱신되어야 함
    priority_queue <int> q;

    for (int i = 0; i < n; i++) {
        int nn;
        cin >> nn;
        q.push(-nn);
    }

    int sum = 0;
    
    //10 20 30 40
    //10+20 + 30+30 + 60+40
    while (q.size() != 1) {
        int a = -q.top();
        q.pop();
        int b = -q.top();
        q.pop();
        sum += (a + b);
        q.push(-(a + b));
    }
    cout << sum;

}