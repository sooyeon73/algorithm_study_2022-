#include<stdio.h>
#include<algorithm>
#include<stack>

using namespace std;

int N, arr[1000001], ans[1000001];
stack<int> stk;

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = N - 1; i >= 0; i--) {
		while (!stk.empty() && stk.top() <= arr[i])
			stk.pop();

		if (stk.empty()) ans[i] = -1;
		else ans[i] = stk.top();

		stk.push(arr[i]);
	}

	for (int i = 0; i < N; i++)
		printf("%d ", ans[i]);
}
