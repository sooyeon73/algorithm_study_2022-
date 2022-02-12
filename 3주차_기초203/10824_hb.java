//10824: 203 - 자료구조 1 (참고) 네 수
import java.util.Scanner;

public class FourNumber {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num[] = new int[4];
		String numString[] = new String[4];
		long result = 0;
		try {
			for(int i=0; i<4; i++) {
				num[i] = sc.nextInt();
				numString[i] = Long.toString(num[i]);
			}
			result = Long.parseLong(numString[0] + numString[1]) + Long.parseLong(numString[2] + numString[3]);
			System.out.println(result);
		} catch (NumberFormatException e) {
			sc.close();
			return;
		}
		sc.close();
		return;
	}

}
