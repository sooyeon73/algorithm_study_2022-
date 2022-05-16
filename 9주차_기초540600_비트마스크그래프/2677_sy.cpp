#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
using namespace std;

int vx[4] = { -1,1,0,0 };
int vy[4] = { 0,0,-1,1 };
int arr[25][25];
int visit[25][25];
int n;
void dfs(int i, int j, int &count) {
	visit[i][j] = true;
	int y, x;
	count++;
	for (int k = 0; k < 4; k++) {
		y = i + vy[k];
		x = j + vx[k];
		if (y < 0 || x < 0 || y >= n || x >= n)
			continue;
		if (visit[y][x] == false && arr[y][x]==1)
			dfs(y, x, count);
	}

}
int main() {

	cin >> n;
	vector<int> countarr;
	string line;
	for (int i = 0; i < n; i++) {
		cin >> line;
		for (int j = 0; j < n; j++) {
			arr[i][j] = int(line[j]-'0');
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int count = 0;
			if (visit[i][j] == false && arr[i][j] == 1) {
				dfs(i, j, count);
				countarr.push_back(count);
			}
		}
	}
	cout << countarr.size() << "\n";
	sort(countarr.begin(), countarr.end());
	for (int i = 0; i < countarr.size(); i++) {
		cout << countarr[i] << "\n";
	}

}
