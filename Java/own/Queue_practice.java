package own;

import java.util.*;

public class Queue_practice {

	public static void main(String[] args) {
		LinkedList<String> que = new LinkedList <String>();
		que.offer("A");
		que.offer("B");
		que.offer("C");
		System.out.println("que：" + que);
		System.out.println("que.poll()：" + que.poll());
		System.out.println("que：" + que);
		
		System.out.println("que.peek()：" + que.peek());        //從隊列頭部取出但不移除元素。如果取出失敗（空的）回傳null

		System.out.println("que.isEmpty()：" + que.isEmpty());  //是空返回true，不為空則返回false

		System.out.println("que.contains(\"A\")：" + que.contains("A"));

		System.out.println("que.size()：" + que.size());

	}

}