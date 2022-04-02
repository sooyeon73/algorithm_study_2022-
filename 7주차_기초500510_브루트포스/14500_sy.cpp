//1.dfs 이용
#include<iostream>
#include<algorithm>
using namespace std;

int di[]={0,0,-1,1};
int dj[]={-1,1,0,0};
        //좌,우,상,하

int board[500][500],visit[500][500];
int MAX;
int N, M;

dfs로 탐색할 수 없는 모양에 대하여
void findExcept(int i, int j){
    //ㅜ
    if (i + 1 < N && j+ 2 < M)
        MAX = max(MAX, board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i+ 1][j + 1]);
    // ㅏ
    if (i + 2 < N && j + 1 < M)
        MAX = max(MAX, board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 2][j]);
    // ㅗ
    if (i - 1 >= 0 && j+ 2 < M)
        MAX = max(MAX, board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i - 1][j + 1]);
    // ㅓ
    if (i + 2 < N && j - 1 >= 0)
        MAX = max(MAX, board[i][j] + board[i + 1][j] + board[i + 1][j - 1] + board[i + 2][j]);
}

void findNormal(int depth, int sum, int i, int j){
    //현재 좌표에서 이어질수있는 모든 4칸 탐색
    //dfs
    if( depth==3){
        //4칸의 탐색 완료
        MAX= max(MAX,sum); 
        return ;
    }
    for(int k=0; k<4; k++){
        int ni= i +di[k];
        int nj= j +dj[k];
        //현재 좌표에서 상하좌우 만들기
        if(ni<0 || nj<0 || ni>=N || nj >=M )
            continue; //범위 초과
        if(visit[ni][nj])
            continue; //이미 탐색한 블럭
        visit[ni][nx]=true;
        findNormal(depth+1, sum+board[ni][nj], ni, nj);
        visit[ni][nx]=false; //다 돌고 나면 초기화
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>N>>M;
     for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> board[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            findExcept(i, j);
            visit[i][j]=true;
            findNormal(0, board[i][j],i,j);
            visit[i][j]=false; 
            
        }
    cout<<MAX; 
    
}


/*
2. 모든 블럭에 대하여 탐색해도 정답 가능
#include<iostream>
#include<algorithm>
using namespace std;
int arr[500][500];
int main(){
    int n, m;
    cin >> n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int ans=0;
    //1
    //가로
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<=m-4; j++){
            int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3];
            if(ans<sum)ans=sum;
        }
    }    
    
    //세로
    for(int i=0; i<m;i++)
    {
        for(int j=0; j<=n-4; j++){
            int sum=arr[j][i]+arr[j+1][i]+arr[j+2][i]+arr[j+3][i];
            if(ans<sum)ans=sum;
        }
    }    
    
    //2
    // ㅁㅁ    
    // ㅁㅁ   
    for(int i=0; i<=n-2;i++){
        for(int j=0; j<=m-2; j++){
            int sum=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            if(ans<sum)ans=sum;
        }
    }
    
    //3
    // ㅁ   ㅁㅁ   ㅁ        ㅁ    ㅁ    ㅁㅁ    ㅁ    ㅁ
    // ㅁ   ㅁ     ㅁㅁ    ㅁㅁ    ㅁㅁ    ㅁ    ㅁ   ㅁㅁ
    // ㅁㅁ  ㅁ      ㅁ    ㅁ      ㅁ      ㅁ  ㅁㅁ    ㅁ 
    // 
    // ㅁㅁㅁ    ㅁ     ㅁㅁ        ㅁㅁ  ㅁ        ㅁ   ㅁㅁㅁ  ㅁㅁㅁ
    //   ㅁ    ㅁㅁㅁ     ㅁㅁ    ㅁㅁ    ㅁㅁㅁ  ㅁㅁㅁ      ㅁ  ㅁ
    for(int i=0; i<=n-3;i++){
        for(int j=0; j<=m-2; j++){
            int s1= arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j+1];
            int s2= arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i][j+1];
            int s3= arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+1][j+1];
            int s4= arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j+1];
            int s5= arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j]+arr[i+2][j];
            int s6= arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1];
            int s7= arr[i+2][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1];
            int s8= arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1];
            int sum= max(s1,max(s2,(max(s3,max(s4,max(s5,max(s6,max(s7,s8))))))));
            if(ans<sum)ans=sum;       
        }
    }
    
    for(int i=0; i<=n-2; i++){
        for(int j=0; j<=m-3; j++){
            int s1= arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1];
            int s2=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+2];
            int s3= arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j];
            int s4= arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]+arr[i][j+1];
            int s5= arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]+arr[i][j];
            int s6= arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]+arr[i][j+2];
            int s7=arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j+2];
            int s8=arr[i+1][j]+arr[i+1][j+1]+arr[i][j+1]+arr[i][j+2];
              int sum= max(s1,max(s2,(max(s3,max(s4,max(s5,max(s6,max(s7,s8))))))));
            if(ans<sum)ans=sum;       
        }
    }
    
    cout<<ans;
}


*/

