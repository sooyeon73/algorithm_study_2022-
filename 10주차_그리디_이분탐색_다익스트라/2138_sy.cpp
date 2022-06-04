#include <string>
#include <iostream>
using namespace std;
string s1;
string s2;
void swit (int i) {
	if (i - 1 >= 0) {
		if (s1[i - 1] == '0')s1[i - 1] = '1';
		else s1[i - 1] = '0';
	}
	if (s1[i] == '0')s1[i] = '1';
	else s1[i] = '0';
	if (i + 1 < s1.length()) {
		if (s1[i + 1] == '0')s1[i + 1] = '1';
		else s1[i + 1] = '0';
	}
}

int main() {

	int n;
	cin >> n;

	cin >> s1;
	cin >> s2;
	string s1_1 = s1;

	int num = 0;
	int num2 = 0;
    
    //0번째를 switch하고 시작
	swit(0); num++;
	for (int i = 1; i < s1.length(); i++) {
		//i-1을 결정할 수 있는 마지막 위치
		if (s1[i - 1] != s2[i - 1]) {
			swit(i); num++;
		}
	}
	if (s1[s1.length() - 1] != s2[s1.length() - 1])num = -1;
	
    //0번째를 switch하지 않고 시작
	s1 = s1_1;
	for (int i = 1; i < s1.length(); i++) {
		//i-1을 결정할 수 있는 마지막 위치
		if (s1[i - 1] != s2[i - 1]) { swit(i); num2++; }
	}
	if (s1[s1.length() - 1] != s2[s1.length() - 1])num2 = -1;

    //최소값 출력
	if (num == -1 && num2 == -1) cout << -1;
	else {
		if (num == -1) cout << num2;
		else if (num2 == -1) cout << num;
		else cout << min(num2, num);
	}
	return 0;
}
