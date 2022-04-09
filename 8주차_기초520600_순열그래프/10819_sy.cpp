//n과m dfs 코드를 수정하여 사용
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
int arr[8]; 
int visit[8];
int input[8];
int ans=-999999;

void arrayloop(int i) {
    if (i == n)
    { 
        int count = 0;
    
        for (int k = 0; k < n-1; k++) {
            count += abs(arr[k] - arr[k + 1]);
        }
    
        ans = max(ans, count);
        return;
    }
    for (int k = 0; k < n; k++) {
        if (visit[k] == false) {
            visit[k] = true;
            arr[i] = input[k];
            arrayloop(i + 1);
            visit[k] = false;
        }
    }

}
int main() {

    cin >> n;
    for(int i=0 ;i<n; i++)
        cin>>input[i];
    arrayloop(0);

    cout << ans;


}
