import java.util.Scanner;

class CCircle {
	private static double pi = 3.14;
	private double radius;
	public CCircle(double r) {
		radius = r;
	}
	public void show() {
		System.out.println("area = " + pi * radius * radius);
	}
}

public class ch9hw_16 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		CCircle cir[] = new CCircle[5];
		for(int i = 0;i < cir.length; i++) {
			cir[i] = new CCircle((double)(i + 1));
			cir[i].show();
		}
	}
}