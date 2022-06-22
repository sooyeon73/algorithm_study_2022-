#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    int n;
    scanf("%d",&n);
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    int m;
    scanf("%d", &m);
    sort(num.begin(), num.end());

    for (int i = 0; i < m; i++) {
        int nn;
        scanf("%d", &nn);
        if (binary_search(num.begin(), num.end(), nn)) {
            printf("%d\n", 1);
        }
        else
            printf("%d\n", 0);
    }


}