#include <stdio.h>

int N, cnt;

int main() {
    scanf("%d", &N);
    while (N >= 5) {
        cnt += N / 5;
        N /= 5;
    }
    printf("%d", cnt);
}
