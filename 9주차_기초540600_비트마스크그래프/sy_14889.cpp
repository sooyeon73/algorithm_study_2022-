#include <algorithm>
#include <vector>
#include<cmath>
#include <iostream>
using namespace std;
int arr[21][21];
int n;
int ans = 999999;
vector<int> start;
vector<int> link;
int visit[21];
//모든 조합 dfs
void tracking(int depth, int pos){
	if (depth == n / 2 )
	{
		int s = 0;
		int l = 0;
        //s와 l에서 <2개씩 선택하는 조합>의 Sij Sji 값의 합
		for (int i = 0; i < n / 2; i++) {
			for (int j = i+1; j < n / 2; j++) {		
					s += arr[start[i]][start[j]];
					s += arr[start[j]][start[i]];
					l += arr[link[i]][link[j]];
					l += arr[link[j]][link[i]];
			}
		}
		if (ans > abs(l - s))ans = abs(l - s);
		return;
	}
	for (int i = pos; i <= n; i++) {
		if (visit[i] == false) {
			visit[i] = true;
			start.push_back(i);
			link.erase(remove(link.begin(), link.end(), i), link.end());
			tracking(depth + 1, i + 1);
			visit[i] = false;
			link.push_back(i);
			start.erase(remove(start.begin(), start.end(), i), start.end());
		}
	}
}

int main() {
	cin >> n;

	for (int i = 1; i <= n; i++)
		link.push_back(i);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
	tracking(0, 1);
	cout << ans;
}
