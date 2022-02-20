#include <iostream>
#include <string>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string n1, n2, n3, n4;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    cout<< stoll(n1 + n2) + stoll(n3 + n4);
    // 최대 길이가 7자리인 두 숫자를 이어 붙이므로 long long int를 사용해야 range 오류 x  
  return 0;
}
