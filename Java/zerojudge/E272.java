package zerojudge;

import java.util.*;
import java.math.*;
// e272: gcd(Fm,Fn)

public class E272 {
	
	public static int gcd(int a, int b) {
		if( b == 0) {
			return a;
		} else {
			return gcd(b, a%b );
		}
	}
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger[] c = new BigInteger[10001];	
		c[0] = BigInteger.valueOf(0);
		c[1] = BigInteger.valueOf(1);
		// 先建費式數列表
		for( int i = 2;i < 10001; i++ ) {
			c[i] = c[i-1].add(c[i-2]);
		}
		
		int m = 0, n = 0, ans = 0;
		while(input.hasNextInt()) {
			m = input.nextInt();
			n = input.nextInt();
			ans = gcd(m, n); 
			System.out.println(c[ans]);
		}
		input.close();
	}
}
