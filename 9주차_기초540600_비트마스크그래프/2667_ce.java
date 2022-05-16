import java.util.*;

public class Main{
    
    private static int num = 0;
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[][] map = new int[N][N];
        int[][] map2 = new int[N][N];

        for(int i=0; i<N; i++) {
        	String s = sc.next();
        	String[] arr = s.split("");
        	for(int j=0; j<N; j++)
        		map[i][j] = Integer.parseInt(arr[j]);
        }
        
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(map[i][j] == 1 && map2[i][j] == 0){
                	num++;
                	find(map, map2, N, i, j);
                }
            }
        }
        
        System.out.println(num);
        
        int[] count = new int[num];
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(map2[i][j]==0);
                else count[map2[i][j]-1]++;
        
        Arrays.sort(count);
        
        for(int i : count)
            System.out.println(i);
        
        sc.close();
    }
    
    public static void find(int[][] g0, int[][] g1, int N, int x, int y) {
    	
    	if(g0[x][y] == 1 && g1[x][y] == 0) {
    		g1[x][y] = num;
            if(y < N-1)
    		    find(g0, g1, N, x, y+1);
            if(x < N-1)
                find(g0, g1, N, x+1, y);
            if(x > 0)
                find(g0, g1, N, x-1, y);
            if(y > 0)
                find(g0, g1, N, x, y-1);
    	}
    	
    }
   
    
}
