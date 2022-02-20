#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string input;
    getline(cin,input);
    for (int i = 0; i < input.length(); i++)
    {

        if (input[i] >= 'a' && input[i] <= ('z' - 13))
            cout << char(int(input[i]) + 13);
        else if (input[i] <= 'z' && input[i] > ('z' - 13))
            cout << char(int(input[i] + 13 - 26));
        else if (input[i] >= 'A' && input[i] <= ('Z' - 13))
            cout << char(int(input[i]) + 13);
        else if (input[i] <= 'Z' && input[i] > ('Z' - 13))
            cout << char(int(input[i] + 13 - 26));
        else
            cout << input[i];

    }
    return 0;
}
