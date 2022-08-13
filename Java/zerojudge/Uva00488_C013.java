package zerojudge;

import java.util.*;
// c013: 00488 - Triangle Wave
public class Uva00488_C013 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int a = 0, f = 0;
		while(n > 0) {
			a = input.nextInt();
			f = input.nextInt();
			while( f > 0 ) {
				for( int i = 1; i <= a; i++ ) {
					for( int j = 0; j < i; j++ ) {
						System.out.print(i);
					}
					System.out.println("");
				}
				for( int i = a-1; i > 0; i-- ) {
					for( int j = 0; j < i; j++ ) {
						System.out.print(i);
					}
					System.out.println("");
				}
				System.out.println("");
				f--;
			}
			n--;
		}
		input.close();
	}
}
