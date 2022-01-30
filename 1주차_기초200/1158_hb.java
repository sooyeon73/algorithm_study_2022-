//1158: 200 - 자료구조 1 요세푸스 문제
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Josephus {
	
	public static void main(String[] args) {
		Queue<Integer> queue = new LinkedList<>();
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int F = sc.nextInt();
		StringBuilder result = new StringBuilder();
		
		for(int i=1; i<=N; i++) {
			queue.add(i);
		}
		
		result.append("<");
		for(int i=0; i<N-1; i++) {
			for(int j=0; j<F-1; j++) {
				int n = queue.poll(); //맨 앞에 있던 숫자를 빼서
				queue.add(n); //맨 뒤에 삽입
			}
			result.append(queue.poll() + ", ");
		}
		
		result.append(queue.poll() + ">");
		System.out.println(result);
		
		sc.close();
		return;	
	}

}
