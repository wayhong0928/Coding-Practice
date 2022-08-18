package zerojudge;

import java.util.*;
// d673: 11608 - No Problem
public class Uva11608_D673 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int count = 1;
		while(input.hasNextInt()) {
			int s = input.nextInt(); // 年初有多少題目
			if( s < 0 ) break;
			
			System.out.println("Case " + count + ":");
			int[] a = new int[12]; // 每個月生產題目數
			int[] b = new int[12]; // 需要的題目數
			
			for(int i = 0 ; i < 12 ; i++ ) {
				a[i] = input.nextInt();
			}
			
			for(int i = 0 ; i < 12 ; i++ ) {
				b[i] = input.nextInt();
				if( s >= b[i] ) {
					System.out.println("No problem! :D");
					s -= b[i];
				} else {
					System.out.println("No problem. :(");
				}
				s += a[i];
			}
			count++;
		}
		input.close();
		// WA 寫法
		//	if( i == 0) {
		//		if( s >= b[i] ) {
		//			System.out.println("No problem! :D");
		//			s -= b[i];
		//		} else {
		//			System.out.println("No problem. :(");
		//		}
		//	} else {
		//		if( s + a[i-1] >= b[i]) {
		//			System.out.println("No problem! :D");
		//			s = s + a[i-1] - b[i];
		//		} else {
		//			System.out.println("No problem. :(");
		//		}
		//	}
	}
}
