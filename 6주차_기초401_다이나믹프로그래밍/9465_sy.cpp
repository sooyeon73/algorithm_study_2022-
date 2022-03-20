#include <iostream>
using namespace std;
int max(int a, int b){
    if (a>b)
        return a;
    else
        return b;
}
int main(){
    int T;
    cin >>T;
    for(int i=0 ; i<T; i++){
        int N;
        cin >>N;
        
      //2차원 배열 동적 할당
      //가격 저장
        int**cost = new int*[N]; 
        for (int i = 0; i < N; i++)
            cost[i] = new int[3];

      // 선택x, 1째줄 선택, 2째줄 선택 3경우 누적값 저장
        int**d = new int*[N]; 
        for (int i = 0; i < N; i++)
            d[i] = new int[3];  
        
        for(int j=0; j<N; j++)
            cin>> cost[j][1];
        for(int j=0; j<N; j++)
            cin>>cost[j][2];
      
        d[0][0]=0;
        d[0][1]=cost[0][1];
        d[0][2]=cost[0][2];
        
        for(int k=1; k<N; k++){
        d[k][0]=max(d[k-1][0],max(d[k-1][1],d[k-1][2]));
        d[k][1]=max(d[k-1][0],d[k-1][2])+cost[k][1];
        d[k][2]=max(d[k-1][0],d[k-1][1])+cost[k][2];
        }

        cout<< max(d[N-1][0],max(d[N-1][1],d[N-1][2]))<<"\n";
    }
}
