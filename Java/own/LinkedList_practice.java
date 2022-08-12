package own;

import java.util.LinkedList;

public class LinkedList_practice {
	public static void main(String[] args) {
		// LinkedList 課本 16-16
		LinkedList<Integer> list = new LinkedList<Integer>();
		for( int i = 0; i <= 30; i += 10 ) {
			list.add(i);
		}
		list.addFirst(100);
		list.addLast(200);
		list.addFirst(300);
		
		System.out.println("元素個數： " + list.size());
		System.out.println("LinkedList的元素： ");
		for( int i = 0; i < list.size(); i++ ) {
			System.out.print(list.get(i) + " ");
		}
		
		System.out.print("\n刪除最後一個元素");
		System.out.println(list.removeLast() + "...");
		System.out.println("第一個元素：" + list.getFirst());
		System.out.println("最後一個元素：" + list.getLast());
		System.out.println("元素值為200的索引值：" + list.indexOf(200));
	}

}
