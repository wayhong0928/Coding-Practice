package zerojudge;

import java.util.*;
import java.math.*;
// c120: 00623 - 500!
public class Uva00623_C120 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger n = new BigInteger("0"), ans = new BigInteger("1");
		
		while(input.hasNextBigInteger()) {
			
			n = input.nextBigInteger();
			ans = new BigInteger("1");
			
			for( BigInteger i = BigInteger.valueOf(1); i.compareTo(n)<=0; i = i.add(BigInteger.ONE))
			{
				ans = ans.multiply(i);
			}
			
			System.out.println(n + "!");
			System.out.println(ans);
		}
		
		input.close();
	}
}
