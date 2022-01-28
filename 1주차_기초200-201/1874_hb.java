//1874: 200 - 자료구조 1 스택 수열
import java.util.Scanner;
import java.util.Stack;

public class StackSequence {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		Stack<Integer> stack = new Stack<Integer>();
		StringBuilder result = new StringBuilder();
		int start = 0;
		
		while(num-- > 0) {
			int input = sc.nextInt();
			
			if(input > start) {
				for(int i=start+1; i<=input; i++) { //start+1부터 input까지 push
					stack.push(i);
					result.append("+\n");
				}
				start = input; //다음 push 시 시작 값을 현재 input으로 초기화
			}
			else if(stack.peek() != input) { //stack top의 원소가 input과 다른 경우
				System.out.println("NO");
				sc.close();
				return; //프로그램 종료
			}
			
			stack.pop(); //맨 위의 원소(==input) pop
			result.append("-\n");
		}
		
		System.out.println(result);
		sc.close();
		return;
	}
}
