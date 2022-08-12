import java.util.Scanner;

class CTriangle {
	protected int base, height;
	public CTriangle(int b, int h) {
		base = b;
		height = h;
	}
	protected void show() {
		System.out.println("base = " + base + ", height = " + height);
	}
}

class CData extends CTriangle {
	public CData(int b, int h) {
		super(b, h);
	}
	public void area() {
		show();
		System.out.println("area = " + (base * height) / 2.0);
	}
}

public class ch10hw6 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		CData obj = new CData(3, 8);
		obj.area();
	}
}