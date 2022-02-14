//10820: 203 - 자료구조 1 (참고) 문자열 분석
import java.io.*;
public class StringAnalysis {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb;
		int count[];
		String input = "";
		
		while((input = br.readLine()) != null){
			count = new int[4];
			sb = new StringBuilder();
			
			for(int i=0; i<input.length(); i++) {
				char ch = input.charAt(i);
				if('a'<= ch && ch <='z') { //소문자
					count[0]++;
				}
				else if('A'<= ch && ch <='Z') { //대문자
					count[1]++;
				}
				else if('0'<= ch && ch <='9') { //숫자
					count[2]++;
				}
				else { //공백
					count[3]++;
				}
			}
			
			for(int i=0; i<4; i++) {
				sb.append(count[i]).append(" ");
			}
	
			System.out.println(sb);
		}
	}
}
