package zerojudge;

import java.util.Scanner;

public class F165 {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int number = input.nextInt();
		int people = input.nextInt();
		if( number == 0 || people == 0 ) {
			System.out.println("OK!");
		} else if( number % people == 0 ) {
			System.out.println("OK!");
		} else {
			System.out.println( number % people );
		}
		input.close();
	}
}