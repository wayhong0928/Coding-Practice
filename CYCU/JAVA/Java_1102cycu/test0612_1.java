import java.util.Scanner;

abstract class Shape {
	public abstract void area();
}

class Circle extends Shape {
	double radius;
	public Circle(double r) {
		radius = r;
	}
	public void area() {
		System.out.println("Circle area = " + (3.1415926 * radius * radius));
	}
}

class Rectangle extends Shape {
	double width, height;
	public Rectangle(double w, double h) {
		width = w;
		height = h;
	}
	public void area() {
		System.out.println("Rectangle area = " + (width * height));
	}
}

class Triangle extends Shape {
	double button, height;
	public Triangle(double b, double h) {
		button = b;
		height = h;
	}
	public void area() {
		System.out.println("Triangle area = " + (button * height) / 2);
	}
}

public class test0612_1 {
	public static void main(String args[]) {
		Scanner in =  new Scanner(System.in);
		Circle cake = new Circle(2.0);
		Rectangle book = new Rectangle(3.0, 4.0);
		Triangle tri = new Triangle(3.0, 4.0);
		cake.area();
		book.area();
		tri.area();
	}
}