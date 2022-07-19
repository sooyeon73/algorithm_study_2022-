#include <stdio.h>
#include <set>

using namespace std;

int N, M, tmp;
set<int> num;

int main(){
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &tmp);
        num.insert(tmp);
    }
    scanf("%d", &M);
    for(int i=0; i<M; i++){
        scanf("%d", &tmp);
        auto iter = num.find(tmp);
        if(iter != num.end()){
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
}
