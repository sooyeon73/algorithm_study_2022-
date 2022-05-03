import java.util.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main{
	
	static Stack<Integer> stk = new Stack<Integer>();
	static Queue<Integer> q = new LinkedList<Integer>();
	
    public static void main(String[] args) throws IOException{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in)); 
        String s = bf.readLine();
        StringTokenizer st = new StringTokenizer(s);
        
        int N = Integer.parseInt(st.nextToken()); //vertex
        int M = Integer.parseInt(st.nextToken()); //edge
        int V = Integer.parseInt(st.nextToken()); //start
        int[][] Graph = new int[N][N];
        
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                Graph[i][j] = 0;
        
        for(int i=0; i<M; i++){
            s = bf.readLine();
            st = new StringTokenizer(s);
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            
            Graph[a-1][b-1] = 1;
            Graph[b-1][a-1] = 1;
        }
        
       DFS(Graph, N, V);
       System.out.println();
       BFS(Graph, N, V);
    }
    
    public static void DFS(int[][] g, int N, int V) {
    	stk.push(V);
		System.out.print(V+" ");
		
    	for(int i=0; i<N; i++) {
    		if(g[V-1][i] == 1 && !stk.contains(i+1)) {
    			DFS(g, N, i+1);
    		}
    	}
    }
    
    public static void BFS(int[][] g, int N, int V) {
    	System.out.print(V+" ");
    	
    	for(int i=0; i<N; i++) {
    		if(g[V-1][i] == 1) {
    			if(!q.contains(i+1)) q.add(i+1);
    			g[i][V-1] = 0;
    			g[V-1][i] = 0;
    		}
    	}
    	
    	while(!q.isEmpty()) BFS(g, N, q.remove());
    }
}
