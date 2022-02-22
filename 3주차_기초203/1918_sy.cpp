#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    stack<char> op;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cout << s[i];
        }
        else
        {
            if (s[i] == '(')
                op.push(s[i]);
          
            else if (s[i] == '*' || s[i] == '/')
            {
                while (!op.empty() && (op.top() == '*' || op.top() == '/')) //top의 우선순위가 더 높을 때
                {
                    cout << op.top();
                    op.pop();
                }
                op.push(s[i]);
            }
            else if (s[i] == '+' || s[i] == '-')
            {
                while (!op.empty() && op.top() != '(') 
                {
                    cout << op.top();
                    op.pop();
                }
                op.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (!op.empty() && op.top() != '(')
                {
                    cout << op.top();
                    op.pop();
                }
                op.pop();
            }
        }
    }
    while (!op.empty())
    {
        cout << op.top();
        op.pop();
    }

    return 0;
}
