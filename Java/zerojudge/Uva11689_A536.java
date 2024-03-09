package zerojudge;

import java.util.*;
//a536: 11689 - Soda Surpler
public class Uva11689_A536 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int e = 0, f = 0, c = 0, ans = 0, k = 0; 
		// 一開始擁有的空瓶子、這天收集到的空瓶子、多少空瓶可以換一瓶新汽水、可以喝到多少瓶汽水、輔助計算用
		while(n > 0) {
			ans = 0;
			e = input.nextInt();
			f = input.nextInt();
			c = input.nextInt();
			e += f;
			while(e >= c) {
				k = e;
				e /= c;
				ans += e;
				e += k % c;
			}
			System.out.println(ans);
			n--;
		}
		input.close();
	}
}
