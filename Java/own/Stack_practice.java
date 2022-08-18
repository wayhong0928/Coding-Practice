package own;

import java.util.*;

public class Stack_practice {

	public static void main(String[] args) {
		var stk=new Stack <String>();
		stk.push("A");
		stk.push("B");
		stk.push("C");
		System.out.println("stk.pop()：" + stk.pop());
		System.out.println("stk：" + stk);
		System.out.println("stk.peek()：" + stk.peek()); // return 剛放進去的值（頂端）
		System.out.println("stk：" + stk);
		System.out.println("stk.contains(\"A\")：" + stk.contains("A"));
		System.out.println("stk.get(0)：" + stk.get(0));
		System.out.println("stk.set(1,\"change\")：" + stk.set(1,"change")); // key-value 概念 第幾項換成其他值 return更換前的值
		System.out.println("stk：" + stk);
		System.out.println("stk.size()：" + stk.size());
		System.out.println("stk.empty()：" + stk.empty());  // 是否為空值  回傳 bool 型態
		System.out.println("stk.toArray()[1]：" + stk.toArray()[1]);
		System.out.println("stk：" + stk);
	}

}
