//10808: 203 - 자료구조 1 (참고) 알파벳 개수
import java.util.Scanner;

public class AlphabetCount {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		int alphabet[] = new int[26];
		
		for(int i=0; i<input.length(); i++) {
			char ch = input.charAt(i);
			alphabet[ch - 'a']++;
		}
		
		for(int i=0; i<alphabet.length; i++) {
			System.out.print(alphabet[i] + " ");
		}
		
		sc.close();
		return;
	}

}
