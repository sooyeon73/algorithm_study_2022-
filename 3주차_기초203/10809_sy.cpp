#include <iostream>
#include <vector>
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin>> input;
    vector<int> v(26,-1); //-1로 초기화
    for (int i =input.length()-1; i>=0; i--){
        v[input[i]-'a']= i;
    }
    for(int i=0; i<26; i++)
        cout<<v[i]<<" ";
    return 0;
   
}
 
