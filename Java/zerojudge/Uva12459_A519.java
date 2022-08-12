package zerojudge;

import java.math.BigInteger;
import java.util.*;
// a519: 12459 - Bees' ancestors
public class Uva12459_A519 {
static ArrayList<BigInteger> ans = new ArrayList<BigInteger>();
	
	public static BigInteger dp(int n) {
		if( n == 0) {
			return BigInteger.valueOf(1);
		} else if (n == 1) {
			return BigInteger.valueOf(1);
		} else {
			if( ans.get(n-1) == BigInteger.valueOf(0) && n-1 > 1) {
				ans.set(n-1, dp(n-2).add(dp(n-3)));
			}
			if( ans.get(n-2) == BigInteger.valueOf(0) && n-2 > 1) {
				ans.set(n-2, dp(n-3).add(dp(n-4)));
			}
			return ans.get(n-1).add(ans.get(n-2));
		}
	}
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);	
		int n = 0;
		ans.add(0, BigInteger.valueOf(1));
		ans.add(1, BigInteger.valueOf(1));
		while(input.hasNext()) {
			n = input.nextInt();
			if(n == 0) break;
			for(int i = 2 ; i <= n ; i++ ) {
				ans.add(i, BigInteger.valueOf(0));
			}
			System.out.println(dp(n));
		}
		input.close();
	}
}
