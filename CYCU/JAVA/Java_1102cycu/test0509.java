import java.util.Scanner;

public class test0509 {

	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		int ans = add(5, 7);
		System.out.print(ans);
	}
	public static int add(int a, int b) {
		return a + b;
	}
	public static int less(int a, int b) {
		return a - b;
	}
}