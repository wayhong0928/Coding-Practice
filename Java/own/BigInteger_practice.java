package own;

import java.math.*;

public class BigInteger_practice {
	public static void main(String[] args) {
		// BigInteger Page 12-48
		BigInteger a = new BigInteger("8786567886771666523775892");
		BigInteger b = new BigInteger("1126838773993333890888316");
		System.out.println("a + b = " + a.add(b));
		System.out.println("a - b = " + a.add(b.negate()));
		System.out.println("a - b = " + a.subtract(b));
		System.out.println("a * b = " + a.multiply(b));
		System.out.println("a / b = " + a.divide(b));
		System.out.println("a ^ 3 = " + a.pow(3));
		System.out.println("gcd(a, b) = " + a.gcd(b));
		// for 迴圈寫法
		// https://stackoverflow.com/questions/3024186/java-how-for-loop-work-in-the-case-of-biginteger
		BigInteger ans = new BigInteger("0");
		for( BigInteger i = BigInteger.valueOf(1); i.compareTo(a)<=0; i = i.add(BigInteger.valueOf(1)))
		{
			//  valueOf(1) i起始值  i.compareto(n)>0 可以看誠i>n   i.compareto(n)<=0 代表i <= n
			//  i.add（BigInteger.valueOf(2)） 代表 i+2
			ans = ans.multiply(i);
		}
	}
}
