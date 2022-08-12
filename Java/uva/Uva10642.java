package uva;

//Uva10642 Can You Solve It?
import java.util.Scanner;

public class Uva10642 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		long n = 0, x1 = 0, x2 = 0, y1 = 0, y2 = 0, s1 = 0, s2 = 0;
		n = input.nextInt();
		for(int i = 0; i <= n+1; i++ ) {
			x1 = input.nextInt();
			y1 = input.nextInt();
			x2 = input.nextInt();
			y2 = input.nextInt();
			s1 = x1 + y1 + (x1 + y1 - 1) * (x1 + y1) / 2 + x1;
			s2 = x2 + y2 + (x2 + y2 - 1) * (x2 + y2) / 2 + x2;
			System.out.println("Case " + (i + 1) + ": " + (s2 - s1));
		}
		input.close();
	}
}
