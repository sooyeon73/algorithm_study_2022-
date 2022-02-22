//2004: 300 - 수학 1 조합 0의 개수
import java.util.Scanner;

public class Combination0 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		long m = sc.nextLong();
		
		long count2 = Count_2(n) - Count_2(m) - Count_2(n-m); 
		long count5 = Count_5(n) - Count_5(m) - Count_5(n-m); 
		
		System.out.println(Math.min(count2, count5));
		sc.close();
		return;
	}
	
	public static long Count_2(long num) {
		long count = 0;
		while (num >= 2) {
			count += num/2;
			num /= 2;
		}
		return count;
	}
	
	public static long Count_5(long num) {
		long count = 0;
		while (num >= 5) {
			count += num/5;
			num /= 5;
		}
		return count;
	}
}
