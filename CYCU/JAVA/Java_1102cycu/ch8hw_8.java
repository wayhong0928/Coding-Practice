import java.util.Scanner;

class Ctest {
	void show(int number) {
		if(number < 0) {
			System.out.println("计璽计");
		} else if(number > 0) {
			System.out.println("计タ计");
		} else {
			System.out.println("ぃ琌タ计ぃ琌璽计");
		}
	}
}

public class ch8hw_8 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		Ctest test = new Ctest();
		test.show(-4);
		test.show(8);
		test.show(0);
	}
}