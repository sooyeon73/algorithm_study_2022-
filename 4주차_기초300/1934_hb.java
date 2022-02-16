//1934: 300 - 수학 1 최소공배수
import java.util.Scanner;

public class LCM {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		
		for(int i=0; i<num; i++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			System.out.println(getLCM(a, b));
		}
		
		sc.close();
		return;
	}

	public static int getGCD(int num1, int num2) {
		if(num1 % num2 == 0) {
			return num2;
		}
		return getGCD(num2, num1 % num2);
	}
	
	public static int getLCM(int num1, int num2) {
		return num1 * num2 / getGCD(num1, num2);
	}
}
