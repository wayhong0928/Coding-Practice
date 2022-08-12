package zerojudge;

import java.util.Scanner;
// 連號或不連號
public class C299_1 {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int n = 0, max = 0, min = 1000;
		n = input.nextInt();
		int m[] = new int[n];
		for( int i = 0; i < n; i++) {
			m[i] = input.nextInt();
			if( m[i] > max ) max = m[i];
			if( m[i] < min ) min = m[i];
		}
		if( max - min == ( n - 1 ) ) {
			System.out.print( min + " " + max + " " + "yes");
		} else {
			System.out.print( min + " " + max + " " + "no");
		}
		input.close();
	}
}