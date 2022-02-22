#include <iostream>
#include<string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count = 0;
    for (int i = N; i >= 1; i--) {
      
            if (i % 5==0) {
                int k = 0;
                int temp = i;
                for (k = 0; temp % 5 == 0; k++) {
                    temp = temp / 5;
                }
                count += k; // 5가 들어있는 개수

                }
            }
        

    cout << count;
    
    return 0;
}
