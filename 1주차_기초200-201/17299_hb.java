//17299: 201 - 자료구조 1 (연습) 오등큰수
import java.util.Scanner;
 
public class NGF {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt(); //수열 원소의 개수 입력 받아 저장
		int seq[] = new int[N]; //입력 받은 수열을 저장할 배열
		int num[] = new int[N]; //등장 횟수를 저장할 배열 
		int ngf[] = new int[N]; //오등큰수를 저장할 배열
		
		for(int i=0; i<N; i++) {
			seq[i] = sc.nextInt();
		}
		
		for(int i=0; i<N; i++) {
			for(int j=0; j<N; j++) {
				if(seq[i] == seq[j]) {
					num[i]++;
				}
			}
		}
		
		for(int i=0; i<N; i++) {
			for(int j=i; j<N; j++){
				if(num[j] > num[i]) {
					ngf[i] = seq[j];
					break;
				}
				else
					ngf[i] = -1;
			}
		}
		
		for(int i=0; i<N; i++) {
			System.out.print(ngf[i] + " ");
		}
		
		sc.close();
		return;
	}

}
