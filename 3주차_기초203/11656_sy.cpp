#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    string input;
    cin >> input;
    vector<string> v(input.length());
       for(int i=0;i<input.length(); i++)
       {
        v[i]=input.substr(i, input.length());
       }
     sort(v.begin(), v.end());
    
    for(int i=0; i<input.length(); i++)
        cout<<v[i]<<'\n';
    return 0;
}
