package own;

// java課本16_2 簡單的泛型範例

class Member<T> {
	private T id;
	public Member(T value) {
		id = value;
	}
	public void show() {
		System.out.println("id = " + id);
	}
}

public class Book_16_2 {

	public static void main(String[] args) {
		Member<Integer> obj1 = new Member<Integer>(6);
		Member<String> obj2 = new Member<String>("Lily");
		obj1.show();
		obj2.show();
	}

}
