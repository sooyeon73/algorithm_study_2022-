#include<stdio.h>
#include<vector>

using namespace std;

int n, cnt;
int seq[100001];
vector<int> v;
vector<char> ans;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &seq[i]);

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
		ans.push_back('+');

		while (!v.empty() && v.back() == seq[cnt]) {
			v.pop_back();
			ans.push_back('-');
			cnt++;
		}
	}

	if (!v.empty()) {
		printf("NO"); return 0;
	}
	
	for (int i = 0; i < ans.size(); i++)
		printf("%c\n", ans[i]);

}
