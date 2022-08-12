import java.util.Scanner;

class Caaa {
	private int num;
	public Caaa(int n) {
		num = n;
	}
	public int get() {
		return num;
	}
	public void display() {
		System.out.println("printed from Caaa class");
	}
}
class Cbbb extends Caaa {
	public Cbbb() {
		super(2);
	}
	public void show() {
		System.out.println("num = " + get());
	}
	public void display() {
		System.out.println("printed from Cbbb class");
	}
}

public class ch10hw9 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		Cbbb bb = new Cbbb();
		bb.display();
	}
}