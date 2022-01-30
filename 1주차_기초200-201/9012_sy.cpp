#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        stack<char> s;
        string input; //char input[50]으로 할경우 오류발생...>???
        bool check = true;

        cin >> input;
        int n= (int)input.length();
        
        for (int l = 0; l<n ; l++) {
            if (input[l] == '(') {
                s.push('(');
            }
            else
            {
                if (s.empty()) // ) 이 먼저 나올 경우
                {
                    check = false;
                    break;
                }
                else
                    s.pop();
            }
        }
        if (s.empty() && check==true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;

}
