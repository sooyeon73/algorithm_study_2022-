import java.util.Scanner;

public class Main{
    static int N, M, min;
    static boolean[] broken = new boolean[10];
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        M = sc.nextInt();
        for(int i=0; i<M; i++)
            broken[sc.nextInt()] = true;
        
        min = Math.abs(N-100);
       
        if(M==10)
        	System.out.println(Math.abs(N-100));
        else
        	System.out.println(check());
        
        sc.close();
    }

    public static int check(){
    	boolean flag=true;
		String tmp="";
		for(int i=0; i<=5000000; i++) {					
			flag=true;
			tmp=""+i;
			for(int j=0; j<tmp.length();j++) {
				if(broken[tmp.charAt(j)-'0']==true) {		
					flag=false;
					break;
				}
			}
			if(flag) {
				min=Math.min(min, Math.abs(i-N)+tmp.length());
			}
		}
		return min;
    }
}
