#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> n(9);
vector<int> ans;
int sum =0;

void find(void){ 
        //9C2 -> 선택하지 않은 7 난쟁이를 채택
        for(int i=0; i<9; i++){ //1번째 선택
            for(int k=i+1; k<9 ; k++){ //2번째 선택
                ans.clear();
                sum =0;
                for(int j=0; j<9; j++){
                    if( j!=k && j!=i ){
                        sum += n[j];
                        ans.push_back(n[j]);
                    }
                }
            if(sum==100){
               sort(ans.begin(), ans.end());
                for(int t=0; t<7; t++)
                   cout<<ans[t]<<"\n";
                return ;    
            }                
            }
        }
}
int main(){
    for(int i =0; i<9; i++)
        cin>> n[i];
    find();
    return 0;
}
