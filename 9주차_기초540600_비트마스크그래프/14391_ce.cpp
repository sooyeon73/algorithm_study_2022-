#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int arr[4][4];
bool check[4][4];
int row, col, res;

void solve(int num, int sum) {
    int x = num % col;
    int y = num / col;
    
    if (num >= row * col) {
        res = max(res, sum);
        return;
    }
    
    if (check[y][x]) solve(num + 1, sum);
    
    else {
        int val, ny, nx;
        val = arr[y][x];
        check[y][x] = true;
        solve(num + 1, sum + val);
        check[y][x] = false;
        
        for (int k = 1; k < row - y; k++) {
            nx = x;
            ny = y + k;
            val *= 10;
            val += arr[ny][nx];
            for (int j = 1; j <= k; j++)
                check[y + j][nx] = true;
            solve(num + 1, sum + val);
            for (int j = 1; j <= k; j++)
                check[y + j][nx] = false;
        }
        val = arr[y][x];
        
        for (int k = 1; k < col - x; k++) {
            ny = y;
            nx = x + k;
            if (check[ny][nx]) return;
            val *= 10;
            val += arr[ny][nx];
            for (int j = 1; j <= k; j++)
                check[ny][x+j] = true;
            solve(num + 1, sum + val);
            for (int j = 1; j <= k; j++)
                check[ny][x + j] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> row >> col;
    string str;
    for (int i = 0; i < row; i++) {
        cin >> str;
        for (int j = 0; j < col; j++)
            arr[i][j] = str[j] - '0';
    }
    
    solve(0, 0);
    cout << res;
}
