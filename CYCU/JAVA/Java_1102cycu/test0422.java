import java.util.Scanner;

public class test0422 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		int year = in.nextInt();
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			System.out.println("¶|¦~");
		} else {
			System.out.println("¥­¦~");
		}
		
		for(int i = 1; i < 10; i++) {
			for(int j = 1; j < 10; j++) {
				if(i * j < 10) {
					System.out.print("0" + (i * j) + " ");
				} else {
					System.out.print((i * j) + " ");
				}
			}
			System.out.println("");
		}
	}
}