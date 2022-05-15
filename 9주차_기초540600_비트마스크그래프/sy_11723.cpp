#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);	
    
    int n;
	cin >> n;
	vector<int> S;
	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;
		int x;
		if(command!="all" && command!="empty")
			cin >> x;
		sort(S.begin(),S.end());
        bool it = binary_search(S.begin(), S.end(), x);
                                
		if (command == "add") {
			if (!it)
				S.push_back(x);
		}
		else if (command == "remove") {
			if (it)
				S.erase(remove(S.begin(), S.end(), x), S.end()); // 특정원소 찾아서 삭제 //
		}
		else if (command == "check") {
			if (it)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (command == "toggle") {
			if (it){
			  	S.erase(remove(S.begin(), S.end(), x), S.end());
            }else
				S.push_back(x);
		}
		else if (command == "all") {
			S = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
		}
		else if (command == "empty")
			S.clear();
	}
}
