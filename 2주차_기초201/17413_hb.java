//17413: 201 - 자료구조 1 (연습) 단어 뒤집기 2
import java.util.Scanner;
import java.util.Stack;

public class WordReverse2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Stack<Character> stack = new Stack<Character>();
		boolean tagFlag = false; //태그 안이면 true
		String input = sc.nextLine(); 
		StringBuilder result = new StringBuilder();
		
		for(int i = 0; i<input.length(); i++) {
			if (input.charAt(i) == '<') {
				tagFlag = true;
				while(!stack.isEmpty()) { //<전까지의 단어 뒤집기 
					result.append(stack.pop());
				}
				result.append('<');
			}
			else if(input.charAt(i) == '>') {
				tagFlag = false;
				result.append('>');
			}
			else if(input.charAt(i) == ' ') {
				while(!stack.isEmpty()) { //공백 전까지의 단어 뒤집기
					result.append(stack.pop());
				}
				result.append(' ');
			}
			else {
				if(tagFlag) //태그 안이면
					result.append(input.charAt(i)); //바로 결과 문자열에 추가
				else //태그 밖이면 
					stack.push(input.charAt(i));
			}
		}
		
		while(!stack.isEmpty()) { //맨 마지막에 스택에 남아있는 단어 뒤집기
			result.append(stack.pop());
		}
		
		System.out.println(result);
		sc.close();
		return;
	}

}
