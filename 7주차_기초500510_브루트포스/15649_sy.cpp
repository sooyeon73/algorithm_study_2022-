#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;
//dfs 배열 따로
int arr[9];
int visit[9];

void arrayloop(int i) {
    if (i == m)
    {
        for (int k = 0; k < m; k++) {
            cout << arr[k] << " ";
        }
        cout << "\n";
        return;
    }
    for (int k = 1; k <= n; k++) {
        if (visit[k]==false) {
            visit[k] = true;
            arr[i] = k;
            arrayloop(i + 1);
            visit[k] = false;
        }
    }

}
int main() {

    cin >> n >> m;
    int count = fac(n, 1);

    arrayloop(0);


}
