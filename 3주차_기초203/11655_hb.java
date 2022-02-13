//11655: 203 - 자료구조 1 (참고) ROT13
import java.util.Scanner;

public class ROT13 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		char rot[] = new char[100];
		
		for(int i=0; i<input.length(); i++) {
			char ch = input.charAt(i);
			if(('A'<= ch && ch <='M') || ('a'<= ch && ch <='m')) { 
				rot[i] = (char)((int)ch + 13);
			}
			else if(('N'<= ch && ch <='Z') || ('n'<= ch && ch <='z')) {
				rot[i] = (char)((int)ch - 13);
			}
			else {
				rot[i] = ch;
			}
		}
		
		for(int i=0; i<input.length(); i++) {
			System.out.print(rot[i]);
		}
		
		sc.close();
		return;
	}

}
