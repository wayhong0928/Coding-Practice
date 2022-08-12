import java.util.Scanner;

class CRational {
	public int n, d;
	public void setND(int num, int den) {
		n = num;
		d = den;
	}
}

public class ch9hw_10 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		CRational aaa = new CRational();
		aaa.setND(2, 5);
		show(aaa);
	}
	public static void show(CRational obj) {
		System.out.println(obj.n + "/" + obj.d);
	}
}