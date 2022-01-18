//9012: 200 - 자료구조 1 괄호
import java.util.Scanner;
import java.util.Stack;

public class CheckVPS {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Stack<Character> stack = new Stack<Character>();
		int num = sc.nextInt();
		sc.nextLine(); //버퍼 비우기
		
		while(num-- > 0) {
			boolean check = true;
			String input = sc.nextLine();
			
			for(int i=0; i<input.length(); i++) {
				while(!stack.isEmpty()){
					stack.pop(); //스택 비우기
				}
				char ch = input.charAt(i);
				if(ch == '(') {
					stack.push(ch);
				}
				else if(ch == ')') {
					if(!stack.isEmpty()) {
						stack.pop();
					} else {
						check = false;
						break; //해당 라인에 대한 검사 종료
					}
				}
			}
			
			if(!stack.isEmpty()) {
				check = false;
			}
			
			System.out.println(check ? "YES" : "NO");
		}
		
		sc.close();
		return;
	}

}
