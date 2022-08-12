import java.util.Scanner;

public class test0502 {
	
	public static int plus(int a, int b) {
		return a + b;
	}
	
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		int a = 0, b = 0;
		a = in.nextInt();
		b = in.nextInt();
		int sum = plus(a, b);
		System.out.println(sum);
	}
}