package own;
// ½Ò¥»13-12
public class Exception_throw {

	public static void main(String[] args) {
		int a = 4, b = 0;
		try {
			if( b == 0) {
				throw new ArithmeticException(); // ©ß¥X¨Ò¥~
			} else {
				System.out.println(a + "/" + b + "=" + a/b );
			}
		} catch(ArithmeticException e) {
			System.out.println(e + " throwed");
		}
	}

}
