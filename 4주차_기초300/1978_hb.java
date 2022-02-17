//1978: 300 - 수학 1 소수 찾기
import java.util.Scanner;
public class FindPrime {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int input = sc.nextInt();
		int count = 0;
		
		for(int i=0; i<input; i++) {
			int num = sc.nextInt();
			if(isPrime(num))
				count++;
		}
		
		System.out.println(count);
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
