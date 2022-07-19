import java.io.*;

public class Main{
    static int[] coin;
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] tmp = br.readLine().split(" ");
        int n = Integer.parseInt(tmp[0]);
        int k = Integer.parseInt(tmp[1]);
        coin = new int[n];
        for(int i=0; i<n; i++){
            coin[i] = Integer.parseInt(br.readLine());
        }
        
        int[] dp = new int[k+1];
        dp[0] = 1;
        for(int i=0; i<n; i++){
            if(coin[i]>k) continue;
            for(int j=coin[i]; j<=k; j++)
                dp[j] += dp[j-coin[i]];
        }
        System.out.println(dp[k]);
    }
}
