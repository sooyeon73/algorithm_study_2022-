package tstz;

import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split("");
        int M = Integer.parseInt(br.readLine());
        Stack<String> left = new Stack<>();
        Stack<String> right = new Stack<>();
        for(String s:str)
        	left.push(s);
        
        for(int i=0; i<M; i++){
            String[] cmd = br.readLine().split(" ");
            switch(cmd[0]){
                case "P":
                	left.push(cmd[1]);
                    break;
                case "L":
                	if(!left.isEmpty()) right.push(left.pop());
                    break;
                case "D":
                	if(!right.isEmpty()) left.push(right.pop());
                    break;
                case "B":
                	if(!left.isEmpty()) left.pop();
                    break;
            }
        }
        
        StringBuilder ans = new StringBuilder();
        while(!left.isEmpty()) 
        	ans.append(left.pop());
        ans.reverse();
        while(!right.isEmpty())
        	ans.append(right.pop());
        System.out.println(ans);
    }
}
