//string 은 == 연산으로 문자열 비교 가능
#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
    int n;
    cin >>n;
    queue<int> q;
    
    for (int i =0 ; i<n; i++){
        string str;
        cin >>str;
        
        if (str == "push"){
            int num;
            cin >> num;
            q.push(num);
        }
        else if ( str == "pop"){
            if (q.empty())
                cout << "-1"<<endl;
            else
            {    cout<< q.front()<<endl;
                q.pop();
            }
        }
        else if ( str == "size"){
            cout<<q.size()<<endl;
        }
        else if (str=="empty"){
            cout<<q.empty()<<endl;
        }
        else if (str=="front"){
            if(q.empty())
                cout<<"-1"<<endl;
            else
                cout<<q.front()<<endl;
        }
        else
        {
            if(q.empty())
                cout<<"-1"<<endl;
            else
                cout<<q.back()<<endl;
        }
    }
    return 0;
    
}
