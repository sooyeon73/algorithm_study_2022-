//6588: 300 - 수학 1 골드바흐의 추측
import java.util.Scanner;

public class Goldbach {
	public static final int MAX = 1000000;
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		//에라토스테네스의 체로 1000000까지의 소수 여부를 배열에 저장
		boolean[] isPrime = new boolean[MAX+1];
        for(int i = 2; i <= MAX; i++) {
            isPrime[i] = true;
        }
        for(int i = 2; i <= MAX; i++) {
            for(int j = i * 2; j <= MAX; j += i) {
                if(!isPrime[j]) continue;
                isPrime[j] = false;
            }
        }
        
        while(true) {
        	int n = sc.nextInt();
        	boolean find = false;
        	if(n == 0) //프로그램 종료 신호
        		break;
        	for(int i=2; i<=n/2; i++) {
        		if(isPrime[i] && isPrime[n-i]) { //i와 n-i가 모두 소수면
        			System.out.println(n + " = " + i + " + " + (n-i));
        			find = true;
        			break; //순서쌍 탐색 중지
        		}
        	}
        	if(!find) //두 홀수 소수의 합으로 n을 나타낼 수 없는 경우
        		System.out.println("Goldbach's conjecture is wrong.");
        }
		
        sc.close();
        return;
	}
}
