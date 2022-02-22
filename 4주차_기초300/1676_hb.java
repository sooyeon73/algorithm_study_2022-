//1676: 300 - 수학 1 팩토리얼 0의 개수
import java.util.Scanner;

public class FactorialZero {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		int count = 0;
		
		while (num >= 5) {
			count += num/5;
			num /= 5;
		}
		
		System.out.println(count);
		sc.close();
		return;
	}

}
