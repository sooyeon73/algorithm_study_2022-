#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // 입력 버퍼 지우기

    for (int i = 0; i < T; i++) {
        char input[1000];
        cin.getline(input, sizeof(input));

        int count = 0;
        for (int k = 0; ; k++) {
            if (input[k] == ' ') {
                for (int c = 0; c < count; c++) {
                    cout << input[k- 1 - c];
                }
                cout << " ";
                count = 0;
            }
            else if (input[k] == '\0') {
                for (int c = 0; c < count; c++) {
                    cout << input[k - 1 - c];
                }
                cout << endl;
                break;

            }
            else {
                count++; // 각단어의 글자수 기억
            }
        }
    }
    return 0;
}
