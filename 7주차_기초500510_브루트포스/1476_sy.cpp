#include<iostream>
using namespace std;
int main(){
    int y, m, d;
    int y1 =0, m1=0, d1=0;
    cin>> y>>m>>d;
    int count=0;
  
  //1년부터 돌려보기
    while(1){
        y1++;
        if(y1==16)
            y1=1;
        m1++;
        if(m1==29)
            m1=1;
        d1++;
        if(d1==20)
            d1=1;
        count++;
        if( y==y1 && m==m1 && d==d1 )
        {cout<<count;
         return 0;
        }
    }
    
}
