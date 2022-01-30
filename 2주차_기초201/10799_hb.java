//10799: 201 - 자료구조 1 (연습) 쇠막대기
import java.util.Scanner;
import java.util.Stack;

public class Stick {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		int result = 0; 
		Stack<Integer> index = new Stack<Integer>();
		
		for(int i=0; i<input.length(); i++) {
			if(input.charAt(i) == '(') {
				index.push(i);
			} else {
				if(index.pop() == i-1) { //(과 )이 인접한 경우 == 레이저인 경우
					result += index.size(); //쇠막대기 수만큼 추가
				} else { //인접하지 않은 경우 == 쇠막대기의 끝인 경우
					result += 1; //해당 쇠막대기의 마지막 잘린 조각 +1
				}
			}
		}
		
		System.out.println(result);
		sc.close();
		return;
	}

}
