package zerojudge;

import java.util.*;
// d318: 11185 - Ternary
public class Uva11185_D318 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		long n = 0;
		while(input.hasNextLong()) {
			n = input.nextLong();
			if( n < 0 ) break;
			System.out.println(Long.toString(n,3));
		}
		input.close();
	}

}
