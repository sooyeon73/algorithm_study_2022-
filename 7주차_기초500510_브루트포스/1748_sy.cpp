#include<iostream>
#include<cmath>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    long long int sum = 0;
    long long int tmp = n;
    long long int count = 0;
    while (tmp != 0) {
        tmp = tmp / 10;
        count++;
    }
    //count자리수
    
    //count-1 까지의 모든 자리수의 합
    for (int i = 1; i <count; i++) {
        sum +=  (i) * (9 * pow(10, i-1));
                 // 자리수  x  개수
        
        //     개수    자리수
        //1-9 : 9        1      
        //10-99 : 90     2      
        //100-999 : 900  3      
    }

    //count 자리 수들이 몇개인지
    sum += ((count) * (n - pow(10,count-1) + 1));
             //자리수 *    개수(n-10^(count-1)+1)
    cout << sum;

}
