import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        char arr[] = sc.next().toCharArray();
        char cnt[] = new char[26];
        for(char c:arr) cnt[c-'a']++;
        for(int i:cnt) System.out.print(i+" ");
    }
}
