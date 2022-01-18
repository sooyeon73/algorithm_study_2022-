//1406: 200 - �ڷᱸ�� 1 ������
import java.util.Scanner;
import java.util.Stack;

public class Editor {

	public static void main(String[] args) {
		 Scanner sc =  new Scanner(System.in);
		 Stack<Character> leftStack = new Stack<Character>();
		 Stack<Character> rightStack = new Stack<Character>();
		 
		 String input = sc.nextLine();
		 for(char ch : input.toCharArray()) {
			 leftStack.push(ch);
		 }
		 
		 int num = sc.nextInt();
		 sc.nextLine();
		 
		 while(num-- > 0) {
			 String cmd = sc.nextLine();
			 switch(cmd.charAt(0)) {
			 	case 'L':
			 		if(!leftStack.isEmpty())
			 			rightStack.push(leftStack.pop());
			 		break;
			 	case 'D':
			 		if(!rightStack.isEmpty())
			 			leftStack.push(rightStack.pop());
			 		break;
			 	case 'B':
			 		if(!leftStack.isEmpty())
			 			leftStack.pop();
			 		break;
			 	case 'P':
			 		leftStack.push(cmd.charAt(2));
			 		break;
			 	default:
			 		break;
			 }
		 }
		 
		 while(!leftStack.isEmpty()) { //����� ���� left�� ���ڸ� right�� �ű��
			 rightStack.push(leftStack.pop());
		 }
		 
		 while(!rightStack.isEmpty()) { //���
			 System.out.print(rightStack.pop());
		 }
		 
		 sc.close();
		 return;
	}

}
