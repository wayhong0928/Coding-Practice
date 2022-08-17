package zerojudge;

import java.io.IOException;
import java.util.*;
// 暫時不寫這題了  除非我找到方法可以讓java一次只input一個char
public class C356 {

	public static void main(String[] args) throws IOException {
		Scanner input = new Scanner(System.in);
		int n = Integer.parseInt(input.nextLine());
		char ans = ' ';
		for( int i = 0; i < n; i++ ) {
			for( int j = 0; j < n; j++) {
				ans = (char) System.in.read();
				if( i == j ) System.out.print(ans);
			}
		}
		input.close();
	}
}
