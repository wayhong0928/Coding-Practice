package zerojudge;

import java.util.*;
// d660: 11764 - Jumping Mario
public class Uva11764_D660 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		int n = 0, w = 0, w1 = 0, h = 0, l = 0; // n = 有幾個牆壁 w = 目前牆壁高度 w1 = 上一個牆壁高度 h = 高 l = 低 
		for( int i = 1; i <= t ; i++ ) {
			System.out.print("Case " + i + ": ");
			n = input.nextInt();
			w1 = input.nextInt();
			h = l = 0;
			for( int j = 1 ; j < n ; j++ ) {
				w = input.nextInt();
				if( w > w1 ) h++;
				if( w < w1 ) l++;
				w1 = w;
			}
			System.out.println(h + " " + l);
		}
		input.close();
	}

}
