#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int d[31]={0,};
    
    d[0]=1; //계산의 편의를 위해 
    d[2]=3;
    
    for(int i=4; i<=30; i=i+2){
        d[i]=d[i-2]*3;
        
        // ㅡㅡ  ㅡㅡ  | |
        // ㅡㅡ  | |  | |
        // ㅡㅡ  | |  ㅡㅡ
        // 모든 경우에 해당 3개의 2*3짜리를 붙이는 경우
        
        for(int j=4; j<=i; j=j+2){
            d[i]+=d[i-j]*2;
            
            /*
              맨 뒤 4칸에 | ㅡㅡ | 가 섞이는 경우를
              추가해야 한다
              
                         ㅡㅡ ㅡㅡ     
               i-j개 결정 | ㅡㅡ |     위/아래인 경우
               =d[i-j]   | ㅡㅡ |      x2
                          j=4부터 
                
                ... j=j+2 
                
               ㅡㅡ ㅡㅡ ㅡㅡ ㅡㅡ
               | ㅡㅡ ㅡㅡ ㅡㅡ |     
               | ㅡㅡ ㅡㅡ ㅡㅡ |
             0개 결정=d[0]=1  j=i까지  
        */    
        }
        }
        cout<<d[n];
   
    
}
