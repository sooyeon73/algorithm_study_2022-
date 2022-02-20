//시간초과
#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cin>> n1;
    cin >>n2;
    
    for(int num=n1; num<=n2 ; num++)
    {
        bool check = true;
        if(num<2) //예외처리!!!
            continue;
        
        //소수찾기는 sqrt(수) 이하 값만 고려하면 됨
        for (int k=2; k*k<=num; k++)
        {
            if(num % k==0){
                check=false;
                break;
            }// 다른 약수가 있음
        }
        if(check == true)
            cout<<num<<'\n';        
    }
    return 0;
}
