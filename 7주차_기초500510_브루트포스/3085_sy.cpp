#include<iostream>
using namespace std;
char arr[50][50];
int ans=1;
//변수이름으로 max쓰면안됨
int n;

//가장 긴 부분을 찾는 함수
void count(){
    int count; 
  //가로
    for(int i=0; i<n; i++){
        count =1;
        for(int j=0; j<n-1; j++){
            if(arr[i][j]==arr[i][j+1])
                count++;
            else
                count=1;           
            if(count>ans)
                ans=count;
            if(ans==n) // n이 정답이 될 수 있는 최대 값이므로 더이상 탐색할 필요가 없음
                return;
        }
    }
    
  //세로
    for(int i=0; i<n; i++){
        count =1;
        for(int j=0; j<n-1; j++){
            if(arr[j][i]==arr[j+1][i])
                count++;
            else
                count=1;           
            if(count>ans)
                ans=count;
            if(ans==n)
                return;
        }
    }
}
int main(){
    cin>> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    
              
    //가로
    char f, b;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
           f= arr[i][j];
           b= arr[i][j+1];
            if(f!=b){ // 인접한 서로다른 색의 두 사탕
                // 색 바꿈
                arr[i][j]=b;
                arr[i][j+1]=f;
                count(); // 바꿨을 때의 가장 긴 값 계산
                if(ans==n)  // n이 정답이 될 수 있는 최대 값이므로 더이상 확인할 필요가 없음
                {
                    cout<<n;
                    return 0;
                }
               // 색 원상 복귀 후 다음 사탕으로 넘어가기
                arr[i][j]=f;
                arr[i][j+1]=b;
            }
        }
    }
    
  //세로  
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
           f= arr[j][i];
           b= arr[j+1][i];
            if(f!=b){
                arr[j][i]=b;
                arr[j+1][i]=f;
                count();
                if(ans==n)
                {
                    cout<<n;
                    return 0;
                }
                arr[j][i]=f;
                arr[j+1][i]=b;
            }
        }
    }
    
    cout<<ans;
    return 0;
    
}
