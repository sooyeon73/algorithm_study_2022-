#include<iostream>
using namespace std;
int main (){
    
    int N;
    cin >> N;
    for(int j=0; j<N; j++){
       int n1, n2;
        cin >> n1;
        cin >> n2;
    
        for(int i=1; ; i++){
            if( ((n1*i) % n2) ==0) 
            {
                cout<< n1*i <<"\n";
                break;
            }
        }
    }
    return 0;
}
