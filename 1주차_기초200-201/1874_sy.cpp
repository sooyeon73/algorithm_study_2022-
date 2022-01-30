//endl을 이용할 시 시간초과 주의!!!

#include <stack>
#include <queue>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;
    queue<char> q;

    int stack_input = 0;

    for (int i = 0; i < n; i++) {

        int input;
        cin >> input;
        //한줄


        if (s.empty()) {
            while (1) {//비어있을시 s.top을 확인 불가...
                s.push(++stack_input);
                q.push('+');
                if (s.top() == input)
                    break;
            }
            s.pop();
            q.push('-');
        }
        else if ( input > s.top()) {
            while (s.top() != input) {
                s.push(++stack_input);
                q.push('+');
            }
            s.pop();
            q.push('-');
        }
        else if (input <s.top()) { //안됨
            cout << "NO" ;
            return 0;
        }
        else // input == s.top()
        {
            s.pop();
            q.push('-');
        }

    }
    while (!q.empty())
    {
        cout << q.front() <<'\n';
        q.pop();
    }
    return 0;

}
