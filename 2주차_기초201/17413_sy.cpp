#include <iostream>
#include <string>

using namespace std;
int main() {
    string s;
    getline(cin, s);
    string::iterator it = s.begin();
    bool tag = false;
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == '<') {
            if (tag == false) {
                for (int k = 0; k < (count / 2); k++) {
                    char temp = s[i - 1 - k];
                    s[i - 1 - k] = s[i - count + k];
                    s[i - count + k] = temp;
                }
                count = 0;
            }
            if (s[i] == '<') {
                tag = true;
            }
            continue;
        }
        else if (i == s.length() - 1) //마지막 단어의 마지막 글자
        {
            if (s[i] != '>') {
                for (int k = 0; k < ((count+1) / 2); k++) {//괄호주의...ㅠㅠ!!

                    char temp = s[i - k];
                    s[i - k] = s[i - count + k];
                    s[i - count + k] = temp;
                }
            }
            break;
        }
        count++;
        if (s[i] == '>')
        {
            tag = false;
            count = 0;
        }
    }

    cout << s;
}
