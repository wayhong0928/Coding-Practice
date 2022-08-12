import java.util.Scanner;

interface shape {
	public abstract void setColor(String str); // abstract 可省
	public abstract void area();
}

class Circle implements shape {  // 可寫多個介面
	String color;
	double radius;
	public Circle(double r) {
		radius = r;
	}
	public void setColor(String str) {
		color = str;
	}
	public void area() {
		System.out.println("Circle color = " + color);
		System.out.println("Circle area = " + (3.1415926 * radius * radius));
	}
}

class Rectangle implements shape {
	String color;
	double length, width;
	public Rectangle(double l, double w) {
		length = l;
		width = w;
	}
	public void setColor(String str) {
		color = str;
	}
	public void area() {
		System.out.println("Rectangle color = " + color);
		System.out.println("Rectangle area = " + (length * width));
	}
}

public class test0612_2 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		Circle cake = new Circle(3.0);
		Rectangle paper = new Rectangle(2.0, 5.0);
		cake.setColor("red");
		cake.area();
		paper.setColor("White");
		paper.area();
	}
}