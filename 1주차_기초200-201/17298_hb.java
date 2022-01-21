import java.util.Scanner;

//17298: 201 - 자료구조 1 (연습) 오큰수 
public class NGE {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		int seq[] = new int[num];
		int result[] = new int[num];
		
		for(int i=0; i<num; i++) {
			seq[i] = sc.nextInt();
		}
		
		for(int i=0; i<num; i++) {
			for(int j=i; j<num; j++){
				if(seq[j] > seq[i]) {
					result[i] = seq[j];
					break;
				}
				else
					result[i] = -1;
			}
		}
		
		for(int i=0; i<num; i++) {
			System.out.print(result[i] + " ");
		}
		
		sc.close();
		return;
	}

}
