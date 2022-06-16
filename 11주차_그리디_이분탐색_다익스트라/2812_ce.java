import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int cnt = 0;
        char[] arr = sc.next().toCharArray();
        boolean[] chk = new boolean[N];
        for(int i=1; i<N; i++){
            int j = i-1;
            while(j>=0 && arr[i]>arr[j] && cnt<K){
                if(!chk[j]) {
                	chk[j] = true; cnt++;
                }
                j--;
            }
            
            if(cnt == K) break;
        }
        
        while(cnt < K) {
        	int idx = 0, min = 10;
        	for(int i=0; i<N; i++) {
        		if(!chk[i] && arr[i]-'0' < min) {
        			idx = i; min = arr[i]-'0';
        		}
        	}
        	chk[idx] = true; cnt++;
        }
        
        StringBuilder ans = new StringBuilder("");
        for(int i=0; i<N; i++)
            if(!chk[i]) ans.append(arr[i]);
        System.out.println(ans.toString());
    }
}
