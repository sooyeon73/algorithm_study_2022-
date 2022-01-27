#include <stdio.h>
#include <stack>

using namespace std;

int N;
int arr[1000001], res[1000001], cnt[1000001];
stack<int> stk;

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		cnt[arr[i]]++;
	}

	for (int i = N - 1; i >= 0; i--) {
		if (stk.empty()) {
			stk.push(arr[i]);
			res[i] = -1;
		}
		else if (cnt[arr[i]] < cnt[stk.top()]) {
			res[i] = stk.top();
			stk.push(arr[i]);
		}
		else {
			while (!stk.empty() && cnt[arr[i]] >= cnt[stk.top()]) {
				stk.pop();
			}

			if (stk.empty()) {
				res[i] = -1;
				stk.push(arr[i]);
			}
			else {
				res[i] = stk.top();
				stk.push(arr[i]);
			}
		}
	}

	for (int i = 0; i < N; i++)
		printf("%d ", res[i]);
}
