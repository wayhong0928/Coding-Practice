import java.util.Scanner;

class CTriangle {
	protected int base, height;
	public CTriangle() {
		base = 1;
		height = 1;
	}
	public CTriangle(int a, int b) {
		base = a;
		height = b;
	}
	protected void show() {
		System.out.println("base = " + base + ", height = " + height);
	}
}
class CData extends CTriangle {
	public CData() {
		super();
	}
	public CData(int a, int b) {
		super(a, b);
	}
	public void area() {
		show();
		System.out.println("area = " + (base * height / 2.0));
	}
}
public class ch10hw15 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		CData a1 = new CData();
		CData a2 = new CData(2, 3);
		a1.area();
		a2.area();
	}
}