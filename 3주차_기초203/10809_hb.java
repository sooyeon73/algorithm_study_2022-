//10809: 203 - 자료구조 1 (참고) 알파벳 찾기
import java.util.Arrays;
import java.util.Scanner;

public class FindAlphabet {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		int alphabet[] = new int[26];
		
		Arrays.fill(alphabet, -1);
		
		for(int i=0; i<input.length(); i++) {
			char ch = input.charAt(i);
			if(alphabet[ch - 'a'] == -1)
				alphabet[ch - 'a'] = i;
			else
				continue;
		}
		
		for(int i=0; i<alphabet.length; i++) {
			System.out.print(alphabet[i] + " ");
		}
		
		sc.close();
		return;
	}

}
