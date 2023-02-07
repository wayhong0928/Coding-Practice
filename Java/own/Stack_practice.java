package own;

import java.util.*;

public class Stack_practice {

	public static void main(String[] args) {
		Stack<String> stk=new Stack <String>();
		stk.push("A");
		stk.push("B");
		stk.push("C");
		System.out.println("stk.pop()�G" + stk.pop());
		System.out.println("stk�G" + stk);
		System.out.println("stk.peek()�G" + stk.peek()); // return ���i�h���ȡ]���ݡ^
		System.out.println("stk�G" + stk);
		System.out.println("stk.contains(\"A\")�G" + stk.contains("A"));
		System.out.println("stk.get(0)�G" + stk.get(0));
		System.out.println("stk.set(1,\"change\")�G" + stk.set(1,"change")); // key-value ���� �ĴX��������L�� return�󴫫e����
		System.out.println("stk�G" + stk);
		System.out.println("stk.size()�G" + stk.size());
		System.out.println("stk.empty()�G" + stk.empty());  // �O�_���ŭ�  �^�� bool ���A
		System.out.println("stk.toArray()[1]�G" + stk.toArray()[1]);
		System.out.println("stk�G" + stk);
	}

}
