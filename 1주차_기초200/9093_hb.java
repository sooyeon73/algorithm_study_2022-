//9093: 200 - 자료구조1 단어 뒤집기
import java.util.Scanner;
import java.util.Stack;

public class WordReverse {

	public static void main(String[] args) {
		 Scanner sc = new Scanner(System.in);
		 
		 int N = sc.nextInt();
		 sc.nextLine(); //개행문자 지워주기(버퍼 비우기)
		 Stack<Character> stack = new Stack<Character>();
		 
		 for(int i = 0; i<N; i++) {
			 String input = sc.nextLine() + " ";
			 for(int j = 0; j<input.length(); j++) {
				 if(input.charAt(j) == ' ') {
					 while(!stack.isEmpty()) {
						 System.out.print(stack.pop());
					 }
					 System.out.print(" ");
				 }
				 else {
					 stack.push(input.charAt(j));
				 }
			 }
			 System.out.println();
		 }
		 
		 sc.close();
		 return;
	}
}

