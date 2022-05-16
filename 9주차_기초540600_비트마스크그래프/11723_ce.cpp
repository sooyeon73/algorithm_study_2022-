#include <iostream>
#include <string>

using namespace std;

int M, e;
string cmd;
bool arr[21];

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> M;
    for(int i=0; i<M; i++){
        cin >> cmd;
        if(!cmd.compare("add")){
            cin >> e;
            arr[e] = true;
        } else if(!cmd.compare("remove")){
            cin >> e;
            arr[e] = false;
        } else if(!cmd.compare("check")){
            cin >> e;
            int res = (arr[e])? 1  :0;
            cout << res << '\n';
        } else if(!cmd.compare("toggle")){
            cin >> e;
            arr[e] = !arr[e];
        } else if(!cmd.compare("all")){
            for(int i=1; i<=20; i++)
                arr[i] = true;
        } else {
            for(int i=1; i<=20; i++)
                arr[i] = false;
        }
    }
}
