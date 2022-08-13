package zerojudge;

import java.util.*;
// d255: 11417 - GCD
public class Uva11417_D255 {
	
	public static long gcd(long a, long b) {
		if( b == 0) {
			return a;
		} else {
			return gcd( b, a % b );
		}
	}
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = 0, g = 0;
		while(input.hasNextInt()) {
			n = input.nextInt();
			if( n == 0 ) break;
			g = 0;
			for( int i = 1 ; i < n ; i++ ) {
				for( int j = i+1 ; j <= n ; j++ ) {
					g += gcd(i, j);
				}
			}
			System.out.println(g);
		}
		input.close();
	}

}
