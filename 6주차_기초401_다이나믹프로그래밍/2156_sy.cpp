#include <iostream>
int cost[10000];
int d[10000][4];
int max(int a, int b){
    if(a>b)
        return a;
    else 
        return b;
}
using namespace std;
int main(){
    int n;
    cin >>n;
    
    for(int i =0; i<n; i++)
        cin>>cost[i];
    
    //  i-1  i
    //0  x   x
    //1  o   x
    //2  x   o
    //3  o   o
    
    d[0][0]=0; d[0][1]=0; //x
    d[0][2]=cost[0]; d[0][3]=0; //o
    
    d[1][0]=0; d[1][1]=d[0][2];
    d[1][2]=cost[1]; d[1][3]=d[0][2]+cost[1];
    
    for(int i=2; i<n; i++){
    d[i][0]=max(d[i-1][0],d[i-1][1]);
            // x x x   o x x
    d[i][1]=max(d[i-1][2],d[i-1][3]);
            // x o x   o o x
    d[i][2]=max(d[i-1][0],d[i-1][1])+cost[i];
            // x x o   o x o
    d[i][3]=d[i-1][2]+cost[i];
            // x o o
    }
    
    cout<< max(d[n-1][0],max(d[n-1][1],max(d[n-1][2],d[n-1][3])));
    
    }
