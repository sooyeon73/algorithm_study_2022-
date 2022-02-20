#include <iostream>
#include <string>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string input;
    while (getline(cin, input)) { //문자열이 주어질 때까지
     
        int arr[4] = { 0, };

        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] >= 'a' && input[i] <= 'z')
                arr[0]++;
            else if (input[i] >= 'A' && input[i] <= 'Z')
                arr[1]++;
            else if (input[i] >= '0' && input[i] <= '9')
                arr[2]++;
            else if (input[i] == ' ')
                arr[3]++;
        }
        for (int j = 0; j < 4; j++)
            cout << arr[j] << " ";
        cout << "\n";

    }
    return 0;
}
