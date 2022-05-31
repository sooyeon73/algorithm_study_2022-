#include <iostream>
#include <string>
using namespace std;
int main() {
    string line;
    cin >> line;
    string cur;
    bool flag = false;

    int ans = 0;
    //-이후를 전부 묶는 방식
    while (1) {
        int idx = line.rfind('-');
        if (idx != string::npos)
            cur = line.substr(idx + 1, line.length());
        else {
            cur = line;
            flag = true;//last
        }
            while (1) {
                int idx2 = cur.find('+');
                if (idx2 == string::npos) {
                    if (!flag) ans -= stoi(cur);
                    else if (flag) ans += stoi(cur);
                    break;
                }
                if (!flag) ans -= stoi(cur.substr(0, idx2));
                else if (flag) ans += stoi(cur.substr(0, idx2));
                cur = cur.substr(idx2+1, cur.length());
            }
            if (flag)break;
        line = line.substr(0, idx);

    }

    cout << ans;
}