#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    vector<int> d(n);

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    d[0] = num[0];

    //1
    //1 100
    //1 2
    //1 2 50

  
  // i 에서 끝나는 최대값
    for (int i = 1; i < n; i++) {
        d[i] = num[i];
      
        for (int k = 0; k < i; k++) {
        //i-1번째까지 d값을 탐색하면서 큰 값으로 갱신  
            if (num[k] < num[i]) // <증가하는 경우에 한하여>
            {
                if (d[i] < d[k] + num[i])
                    d[i] = d[k] + num[i];
            }
        }
    }

    int ans = d[0];
    for (int i = 0; i < n; i++) {
        if (d[i] > ans)
            ans = d[i];
    }
    cout << ans;


}
