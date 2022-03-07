import java.util.Scanner;

public class Main{
	static int[] dp = new int[1001];
	static int n;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for(int i=0; i<3; i++)
        	dp[i] = i;
        set();
        
        System.out.println(dp[n]);
        sc.close();
    }
    
    public static void set() {
    	for(int i=3; i<=n; i++)
    		dp[i] = (dp[i-1]%10007+dp[i-2]%10007)%10007;
    }
   
}
