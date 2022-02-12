#include <iostream>
#include <stack>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int* arr = new int[N];

    string input;
    cin >> input;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    stack<double> s; 

    for (int t = 0; t < input.length(); t++) {

        if ( input[t] == '+' )
        {
            double num1 = s.top();
            s.pop();
            double num2 = s.top();
            s.pop();
            s.push(double(num2 + num1));
        }
        else if (input[t] == '-')
        {
            double num1 = s.top();
            s.pop();
            double num2 = s.top();
            s.pop();
            s.push(double(num2- num1));
        }
        else if (input[t] == '*')
        {
            double num1 = s.top();
            s.pop();
            double num2 = s.top();
            s.pop();
            s.push(double(num2 * num1));
        }
        else if (input[t] == '/')
        {
            double num1 = s.top();
            s.pop();
            double num2 = s.top();
            s.pop();
            s.push(double(num2 / num1));
        }

        else {
            s.push(double(arr[input[t] - 'A']));
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << s.top();

    return 0;
}
