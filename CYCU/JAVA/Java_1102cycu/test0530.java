import java.util.Scanner;

class Circle {
	private double pi = 3.14;
	private double radius;
	public Circle(double r) {
		radius = r;
	}
	public void area() {
		System.out.println("area = " + (pi * radius * radius));
	}
}

class Cake extends Circle {
	private String type;
	public Cake(double r, String t) {
		super(r);
		type = t;
	}
	public void show() {
		System.out.println("Cake taste = " + type);
		area();
	}
}

public class test0530 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		Circle obj1 = new Circle(1.0);
		obj1.area();
		Cake obj2 = new Cake(2.0, "PineApple");
		obj2.show();
	}
}