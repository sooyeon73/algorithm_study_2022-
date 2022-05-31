#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int> a, const pair<int, int> b) {
		if (a.second == b.second) 
            return a.first < b.first;
    else 
		return a.second < b.second;
}
int main() {
	int n;
	cin >> n;
	vector<pair<int,int>> v;

	for (int i = 0; i < n; i++) {
		int s;
		int e;
		cin >> s >> e;
		v.push_back({ s, e });
	}

	int count = 1;
	sort(v.begin(), v.end(), cmp);
	int endtime = v[0].second;
	for (int i = 1; i < v.size(); i++) {
		if (v[i].first >= endtime) {
			count++;
			endtime = v[i].second;
		}
	}

	cout << count;


}