#include <iostream>
#include <vector>
int d[1001][3];
using namespace std;

int min(int a, int b) {
    if(a<b){
        return a;
    }
    else{
        return b;
    }

}
int main() {
    int N;
    cin >> N;
    d[0][0]=0;
    d[0][1]=0;
    d[0][2]=0;
    
  //i 번째 줄에서 0색으로 칠했을 때, 1색으로 칠했을 때, 2색으로 칠했을 때 
  // 모든 각 경우의 최소값을 누적으로 구해놓아야
    for (int i = 1; i <= N; i++) {
            int n0, n1, n2;
        cin >> n0>> n1>>n2;
        d[i][0]= min(d[i-1][1],d[i-1][2]) + n0;
        d[i][1]= min(d[i-1][0],d[i-1][2]) + n1;
        d[i][2]=min(d[i-1][0],d[i-1][1]) +n2;                     
    }
    cout <<min(d[N][0],min(d[N][1],d[N][2]));


}
