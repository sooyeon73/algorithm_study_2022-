//10828: 200 - 자료구조1 스택
import java.util.Scanner;

public class IntStack {
	static int[] stack;
	static int size;
	
	public static void push(int value) {
		stack[size++] = value;
	}
	
	public static int pop() {
		if(size == 0)
			return -1;
		else
			return stack[--size];
	}
	
	public static int size() {
		return size;
	}
	
	public static int empty() {
		if(size == 0)
			return 1;
		else
			return 0;
	}
	
	public static int top() {
		if(size == 0)
			return -1;
		else
			return stack[size-1];
	}
	
	
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		
		stack = new int[N];
		
		for(int i = 0; i<N; i++) {
			String str = scanner.next();
			
			switch(str) {
				case "push":
					push(scanner.nextInt());
					break;
					
				case "pop":
					System.out.println(pop());
					break;
					
				case "size":
					System.out.println(size());
					break;
					
				case "empty":
					System.out.println(empty());
					break;
					
				case "top":
					System.out.println(top());
					break;
					
				default:
					break;
			}
		}
		
		scanner.close();
	}

}
