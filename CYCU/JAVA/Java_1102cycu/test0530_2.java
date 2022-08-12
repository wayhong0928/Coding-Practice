import java.util.Scanner;
// test0530_2
class Shape {
	public double area() {
		return 0;
	}
	public static void largest(Shape a[]) {
		double max = 0;
		for(int i = 0; i < a.length; i++) {
			if(a[i].area() > max) max = a[i].area();
		}
		System.out.println("The largest area is " + max);
	}
}

class Circle extends Shape {
	double pi = 3.14;
	double radius;
	public Circle(double r) {
		radius = r;
	}
	public double area() {
		return (pi * radius * radius);
	}
}

class Rect extends Shape {
	double width, height;
	public Rect(double w, double h) {
		width = w;
		height = h;
	}
	public double area() {
		return (width * height);
	}
}

class Triangle extends Shape {
	double button, height;
	public Triangle(double b, double h) {
		button = b;
		height = h;
	}
	public double area() {
		return (button * height) / 2;
	}
}

public class test0530_2 {
	public static void main(String args[]) {
		Shape arr[] = new Shape[3];
		arr[0] = new Circle(2.0);
		arr[1] = new Rect(3.0, 4.0);
		arr[2] = new Triangle(10.0, 6.6);
		Shape.largest(arr);
	}
}