#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;
int arr[9];

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
            arr[i] = k;
            arrayloop(i + 1);
        }
}
int main() {

    cin >> n >> m;
    arrayloop(0);


}
