package own;

// java±Ð¾Ç¤â¥U16-6­¶

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
		var obj1 = new Member<Integer>(6);
		var obj2 = new Member<String>("Lily");
		obj1.show();
		obj2.show();
	}

}
