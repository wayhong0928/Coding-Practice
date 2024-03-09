package zerojudge;

import java.util.*;
// c005: 10300 - Ecological Premium
public class Uva10300_C005 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		long ans = 0, f = 0, area = 0, num = 0, rec = 0;   // 獎金總數、農夫數量、農場面積、動物數目、環保等級
		while(n > 0) {
			f = input.nextLong();         // 農夫數量
			ans = 0;                         // 獎金歸零
			while( f > 0 ) {
				area = input.nextLong();  // 農場面積
				num = input.nextLong();   // 動物數目
				rec = input.nextLong();   // 環保等級
				ans += area * rec;		  // 面積 * 環保 = 獎金
				f--;
			}
			System.out.println(ans);
			n--;
		}
		input.close();
	}
}
