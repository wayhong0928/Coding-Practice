import java.util.Scanner;

class Caaa {
	private int value;
	public Caaa() {
		//請題寫此處的程式碼，使得呼叫此建構元時，value的值會被設為10
		this.value = 10;
		System.out.println("value = " + value);
	}
	public Caaa(int i) {
		value = i;
		System.out.println("value = " + value);
	}
}

public class ch9hw_3 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		Caaa obj1 = new Caaa();
		Caaa obj2 = new Caaa(12);
	}
}