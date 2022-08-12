package zerojudge;

import java.util.Scanner;

// e635: 12908 - The book thief
public class Uva12908_E635 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int s = 0, sum = 0;
		while(true) {
			s = input.nextInt();
			sum = 0;
			if( s == 0 ) {
				break;
			} else {
				for( int i = 0; i <= s + 1; i++ ) {
					sum += i;
					if( sum > s) { // 如果總和大於題目給的總和就表示缺了這頁！
						System.out.println((sum - s) + " " + i);
						break;
					}
				}
			}
		}
		input.close();
	}
}
