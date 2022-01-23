#include <stdio.h>
#include <queue>

using namespace std;

int N, K;
queue<int> arr;

int main() {
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		arr.push(i + 1);
	}

	printf("<");
	while (true) {
		if (arr.size() <= 1) break;
		for (int i = 0; i < K - 1; i++) {
			arr.push(arr.front());
			arr.pop();
		}
		printf("%d, ", arr.front());
		arr.pop();
	}
	printf("%d>", arr.front());
}
