//10845: 200 - 자료구조 1 큐
import java.util.Scanner;

public class IntQueue { //선형큐로 구현

	static int[] queue;
	static int front = -1;
	static int rear = -1;
	
	public static void push(int value) {
		queue[++rear] = value;
	}
	
	public static int pop() {
		if (front == rear) {
			return -1;
		}
		else
			return queue[++front];
	}
	
	public static int size() {
		return (rear - front);
	}
	
	public static int empty() {
		if(front == rear)
			return 1;
		else
			return 0;
	}
	
	public static int front() {
		if (front == rear) {
			return -1;
		}
		else
			return queue[front+1];
	}
	
	public static int back() {
		if (front == rear) {
			return -1;
		}
		else
			return queue[rear];
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		queue = new int[num];
		
		while(num-- > 0) {
			String cmd = sc.next();
			switch(cmd) {
				case "push":
					push(sc.nextInt());
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
				case "front":
					System.out.println(front());
					break;
				case "back":
					System.out.println(back());
					break;
				default:
					break;
			}
		}
		
		sc.close();
		return;
	}

}
