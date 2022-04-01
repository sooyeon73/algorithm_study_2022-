#include <iostream>
#include<vector>
#include<string>
#include <cmath>
using namespace std;
int b;
vector<int> button;
bool check (int i){
    
    string str=to_string(i);
    for(int l=0; l<str.length();l++){
        for(int k=0; k<b; k++)
        {
            if(button[k]==(str[l]-'0')) //string int 비교를 위해서 -'0'
                return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin >> n; 
    cin >> b;
    for (int i = 0; i < b; i++){
        int num;
        cin >> num;
        button.push_back(num);
    }

    int m=abs(n-100);

    //최대 n 500000
    //0~>500000 올라가거나
    //1000000~>500000 내려가거나
    for(int i=0; i<1000000;i++){
        if(check(i)){
            int count = abs(i-n)+to_string(i).length(); // 올라가고내려가는수 + 숫자버튼수
            m= min(count, m);
        }
    }
    cout<<m;
}
