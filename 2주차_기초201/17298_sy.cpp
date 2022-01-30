// 자료의 크기가 최대 백만개이므로 이중 반복문을 돌릴 경우 
// 백만의 제곱만큼 시간 복잡도가 소요
//스택을 이용한다면 O(n)의 시간 복잡도로 처리가능
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n, -1);


    for (int i = 0; i < n; i++) {
        int input;
            cin >> input;
            v[i] = input;
    }

    stack<int> s;
    for (int i = 0; i < n; i++) {
        
        while (!s.empty() && v[s.top()] < v[i])
        {
            ans[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }
    for (int i : ans)cout << i << " ";
    return 0;
}
