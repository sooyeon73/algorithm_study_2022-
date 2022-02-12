#include <iostream>
#include <vector>
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin>> input;
    vector<int> v(26);
    for (int i =0; i<input.length(); i++){
        v[input[i]-'a']++;
    }
    for(int i=0; i<26; i++)
        cout<<v[i]<<" ";
    return 0;
   
}

