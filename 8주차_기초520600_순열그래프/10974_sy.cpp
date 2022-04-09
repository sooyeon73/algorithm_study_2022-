#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
int arr[9];
int visit[9];

void arrayloop(int i) {
    if (i == n)
    {
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << "\n";
        return;
    }
    for (int k = 1; k <= n; k++) {
        if (visit[k] == false) {
            visit[k] = true;
            arr[i] = k;
            arrayloop(i + 1);
            visit[k] = false;
        }
    }

}
int main() {
    cin >> n;
    arrayloop(0);
}
