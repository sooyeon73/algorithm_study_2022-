import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Queue<Integer> tri = new LinkedList<Integer>();
        int n = sc.nextInt();
        tri.add(sc.nextInt());
        for(int i=1; i<n; i++){
            for(int j=0; j<=i; j++){
                int e = sc.nextInt();
                if(j == 0)
                    e += tri.peek();
                else if(j == i) {
                    e += tri.poll();
                }
                else{
                    int temp = tri.poll();
                    int m = (temp > tri.peek())? temp : tri.peek();
                    e += m;
                }                  
                tri.add(e);
            }
        }
        
        int max = 0;
        for(int i=0; i<n; i++){
            int chk = tri.poll();
            max = (max > chk)? max : chk;
        }
        
        System.out.println(max);
        sc.close();
    }
}
