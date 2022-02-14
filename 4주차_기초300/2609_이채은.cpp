#include <stdio.h>

int gcd(int n1, int n2) {
    if (n2 == 0) {
        return n1;
    }
    else {
        return gcd(n2, n1 % n2);
    }
}

int main() {
    int n1, n2, ans;
    scanf("%d %d", &n1, &n2);

    ans = gcd(n1, n2);
    printf("%d\n%d", ans, n1 * n2 / ans);
}
