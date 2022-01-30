#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0; i<n;i++){
        string in;
        cin >> in;
        
        if(in=="push"){
            int num;     
            cin >> num;
            s.push(num);
        }
        else if (in=="pop"){
            if(s.empty()){
                cout<<"-1"<<endl;
            }
            else{
                cout<<s.top()<<endl;
                s.pop();
            }
        }
        else if(in=="size"){
            cout<<s.size()<<endl;
        }
        else if (in=="empty"){
            cout<<s.empty()<<endl;
        }
        else {
            if(s.empty()){
                cout<<"-1"<<endl;
            }
            else{
            cout<<s.top()<<endl;
            }
        }
        
    }
            return 0;

    
}
