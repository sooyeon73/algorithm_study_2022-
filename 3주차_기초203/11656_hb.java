//11656: 203 - 자료구조 1 (참고) 접미사 배열
import java.util.Arrays;
import java.util.Scanner;

public class SuffixArray {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		String arrToSort[] = new String[input.length()];
		StringBuilder sb = new StringBuilder();
		
		for(int i=0; i<(input.length()); i++) {
			for(int j=i; j<input.length(); j++) {
				sb.append(input.charAt(j));
			}
			arrToSort[i] = sb.toString();
			sb.setLength(0); //sb 초기화
		}
		
		Arrays.sort(arrToSort);
		for(int i=0; i<arrToSort.length; i++) {
			System.out.println(arrToSort[i]);
		}
	
		sc.close();
		return;
	}
}
