//10866: 200 - 자료구조 1 덱
import java.util.Scanner;

public class IntDeque {

	int[] dequeue;
	int size;
	int front;
	int rear;
	
	public IntDeque(int length){
		this.dequeue = new int[length];
		this.size = 0;
		this.front = 0;
		this.rear = 0;
	}
	
	public void push_front(int value) {
		//용적이 가득 차면 배열의 길이를 늘려주는 코드를 추가할 수도 있음
		dequeue[front] = value;
		front = (front - 1 + dequeue.length) % dequeue.length;
		size++;
	}
	
	public void push_back(int value) {
		rear = (rear + 1) % dequeue.length;
		dequeue[rear] = value;
		size++;
	}
	
	public int pop_front() {
		if (size == 0) {
			return -1;
		}
		else
			front = (front + 1) % dequeue.length;
			size--;
			return dequeue[front];
	}
	
	public int pop_back() {
		int prev = rear;
		if (size == 0) {
			return -1;
		}
		else
			rear = (rear - 1 + dequeue.length) % dequeue.length; 
			size--;
			return dequeue[prev];
	}
	
	public int size() {
		return size;
	}
	
	public int empty() {
		if(size == 0)
			return 1;
		else
			return 0;
	}
	
	public int front() {
		if (front == rear) {
			return -1;
		}
		else
			return dequeue[(front + 1) % dequeue.length];
	}
	
	public int back() {
		if (front == rear) {
			return -1;
		}
		else
			return dequeue[rear];
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		IntDeque dequeue = new IntDeque(num);
		
		while(num-- > 0) {
			String cmd = sc.next();
			switch(cmd) {
				case "push_front":
					dequeue.push_front(sc.nextInt());
					break;
				case "push_back":
					dequeue.push_back(sc.nextInt());
					break;
				case "pop_front":
					System.out.println(dequeue.pop_front());
					break;
				case "pop_back":
					System.out.println(dequeue.pop_back());
					break;
				case "size":
					System.out.println(dequeue.size());
					break;
				case "empty":
					System.out.println(dequeue.empty());
					break;
				case "front":
					System.out.println(dequeue.front());
					break;
				case "back":
					System.out.println(dequeue.back());
					break;
				default:
					break;
			}
		}
		
		sc.close();
		return;
	}
}
