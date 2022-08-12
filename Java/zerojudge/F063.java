package zerojudge;

import java.util.Scanner;

public class F063 {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int ans[] = new int[n];
		int k = 0, check = 0, min = 1000, max = 0;
		for( int i = 0; i < n; i++ ) {
			k = input.nextInt();
			min = 1000;
			for( int j = 0; j < k; j++ ) {
				check = input.nextInt();
				if( check < min ) min = check;
			}
			ans[i] = min;
		}
		for( int i = 0; i < n; i++) {
			if( max < ans[i] ) max = ans[i];
		}
		System.out.println(max);
		input.close();
	}
}
