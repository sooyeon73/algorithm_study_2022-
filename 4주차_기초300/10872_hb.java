//10872: 300 - 수학 1 팩토리얼
import java.util.Scanner;

public class Factorial {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int input = sc.nextInt();
		System.out.println(factorial(input));
		sc.close();
		return;
	}
	
	public static int factorial(int num) {
		if(num <= 1)
			return 1;
		else
			return num * factorial(num-1);
	}

}
