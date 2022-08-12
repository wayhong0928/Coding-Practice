import java.util.Scanner;

class CCircle {
	double pi = 3.14;
	double area(double r) {
		return (r * r * pi);
	}
	float area(float r) {
		return (r * r * (float)pi);
	}
	int area(int r) {
		return (r * r * (int)pi);
	}
}

public class ch8hw_13 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		CCircle cir1 = new CCircle();
		System.out.println(cir1.area(2));
		System.out.println(cir1.area(2.2f));
		System.out.println(cir1.area(2.2));
	}
}