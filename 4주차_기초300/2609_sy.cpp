#include<iostream>
using namespace std;
int main (){
    
    int n1, n2;
    cin>> n1;
    cin>> n2;
    
        int max;
        for(int i=1; i<=n1 && i<=n2 ; i++){
            if(n1%i==0 && n2%i==0) //최대공약수
                max=i;
        }
        cout<<max<<"\n";

        for(int i=1; ; i++){
            if( ((n1*i) % n2) ==0) //최소공배수
            {cout<< n1*i;
                break;
            }
        }
    return 0;     
 
}
