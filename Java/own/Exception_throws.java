package own;
// ù?ù 13-15
public class Exception_throws {
	
	public static void aaa(int a, int b) throws ArithmeticException {
		int c = a / b;
		System.out.println(a + "/" + b + "=" + c);
	}
	
	public static void main(String[] args) {
		try {
			aaa(4, 0);
		} catch(ArithmeticException e) {
			System.out.println(e + " throwed");
		}
	}

}
