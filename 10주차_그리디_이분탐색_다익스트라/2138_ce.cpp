#include <iostream>
#include <algorithm>

using namespace std;

int N, cnt_zero = 1, cnt_first;
bool light[100001][2], target[100001];

int main(){
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%1d", &light[i][0]);
        light[i][1] = light[i][0];
    }
    for(int i=0; i<N; i++)
        scanf("%1d", &target[i]);
    
    
    light[0][0] = !light[0][0];
    light[1][0] = !light[1][0];
    
    for(int i=1; i<N; i++){
        for(int j=0; j<2; j++){
            if(light[i-1][j] != target[i-1]){
                j==0 ? cnt_zero++ : cnt_first++;
                for(int k=-1; k<=1; k++){
                    light[i+k][j] = !light[i+k][j];
                }
            }
        }
    }
    
    for(int i=0; i<2; i++){
        for(int j=0; j<N; j++){
            if(light[j][i] != target[j]){
                i==0 ? cnt_zero = 2147483647 : cnt_first = 2147483647;
                break;
            }
        }
    }
    
    int ans = min(cnt_zero, cnt_first);
    if(ans == 2147483647) ans = -1;
    printf("%d", ans);
}
