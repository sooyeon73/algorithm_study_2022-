//9012: 200 - �ڷᱸ�� 1 ��ȣ
import java.util.Scanner;
import java.util.Stack;

public class CheckVPS {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Stack<Character> stack = new Stack<Character>();
		int num = sc.nextInt();
		sc.nextLine(); //���� ����
		
		while(num-- > 0) {
			boolean check = true;
			String input = sc.nextLine();
			
			for(int i=0; i<input.length(); i++) {
				while(!stack.isEmpty()){
					stack.pop(); //���� ����
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
						break; //�ش� ���ο� ���� �˻� ����
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
