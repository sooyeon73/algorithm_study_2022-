//1929: 300 - 수학 1 소수 구하기
import java.util.Scanner;

public class FindPrime2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		int n = sc.nextInt();
		
		for(int i=m; i<=n; i++) {
			if(isPrime(i)) {
				System.out.println(i);
			}
		}
		
		sc.close();
		return;
	}

	public static boolean isPrime(int num) {
		if(num < 2) 
			return false;
		for(int i=2; i*i<=num; i++) {
			if(num % i == 0) 
				return false;
		}
		return true;
	}
}


