//2609: 300 - 수학 1 최대공약수와 최소공배수
import java.util.Scanner;
public class GCDLCM {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		int gcd = getGCD(a, b);
		int lcm = a * b / gcd;
		
		System.out.println(gcd);
		System.out.println(lcm);
		
		sc.close();
		return;
	}
	
	public static int getGCD(int num1, int num2) {
		if(num1 % num2 == 0) {
			return num2;
		}
		return getGCD(num2, num1 % num2);
	}

}
