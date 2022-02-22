#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m;

int count(int A, int B) {
    int ans = 0;
    while (A >= B) {
        ans += A / B;
        A /= B;
    }
    return ans;
}

int main() {
    scanf("%d %d", &n, &m);
    int cnt_two = count(n, 2) - count(n - m, 2) - count(m, 2);
    int cnt_five = count(n, 5) - count(n - m, 5) - count(m, 5);
    printf("%d", min(cnt_two, cnt_five));
}
