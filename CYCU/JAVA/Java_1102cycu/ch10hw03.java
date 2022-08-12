import java.util.Scanner;

class Caaa {
	public int num1, num2;
	public Caaa() {
		num1 = 1;
		num2 = 1;
	}
	public Caaa(int a, int b) {
		num1 = a;
		num2 = b;
	}
}
class Cbbb extends Caaa{
	public Cbbb(int a, int b) {
		super(a, b);
	}
	public void show() {
		System.out.println("num1 = " + num1 + ", num2 = " + num2);
	}
}

public class ch10hw03 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		Cbbb a1 = new Cbbb(5, 10);
		Cbbb a2 = new Cbbb(2, 6);
		a1.show();
		a2.show();
	}
}