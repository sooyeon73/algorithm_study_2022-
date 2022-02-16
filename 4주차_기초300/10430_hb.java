//10430: 300 - 수학 1 나머지
import java.util.Scanner;

public class Remainder {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num[] = new int[3];
		int result[] = new int[4];
		for(int i=0; i<3; i++) {
			num[i] = sc.nextInt();
		}
		result[0] = (num[0] + num[1]) % num[2];
		result[1] = ((num[0] % num[2]) + (num[1] % num[2])) % num[2];
		result[2] = (num[0] * num[1]) % num[2];
		result[3] = ((num[0] % num[2]) * (num[1] % num[2]) % num[2]);
		
		for(int i=0; i<4; i++) {
			System.out.println(result[i]);
		}
		
		sc.close();
		return;
	}

}
