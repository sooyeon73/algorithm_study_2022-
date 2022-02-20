#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>> N;
    int count =0 ; 
    vector<int> num(N);
    
    for(int i =0; i<N; i++)
    {
        cin>>num[i];
        int max=0;
        for (int k=num[i]; k>=2; k--)
        {
            if(num[i]%k==0)
                max=k; // 본인으로만 나눠떨어짐
        }
        if(max==num[i])
            count++;
        
    }
    cout<<count;

}
