#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool flag;
string S, T;

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> S >> T;
    
    while(true){
        
        if (S.length() == T.length()){
            if(S == T) flag = true;
            break;
        }
        
        char c = T[T.length() - 1];
        T.pop_back();
        
        if (c == 'B') reverse(T.begin(), T.end());
    }
    
    cout << (flag ? 1:0) << "\n";
}
