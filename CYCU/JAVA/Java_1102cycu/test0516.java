import java.util.Scanner;

class Circle {
	private double pi, radius;
	
	public void SetCircle(double p, double r) {
		pi = p;
		radius = r;
	}
	void SetCircle(double r) {
		radius = r;
	}
	void show_area() {
		System.out.println(pi * radius * radius);
	}
	void show_all() {
		System.out.println("r = " + radius);
		show_area();
	}
}

public class test0516 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		Circle cir1 = new Circle();
		cir1.SetCircle(3.1415, 4.0);
		cir1.show_area();
		cir1.SetCircle(2.0);
		cir1.show_area();
	}
}
