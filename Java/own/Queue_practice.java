package own;

import java.util.*;

public class Queue_practice {

	public static void main(String[] args) {
		LinkedList<String> que = new LinkedList <String>();
		que.offer("A");
		que.offer("B");
		que.offer("C");
		System.out.println("que�G" + que);
		System.out.println("que.poll()�G" + que.poll());
		System.out.println("que�G" + que);
		
		System.out.println("que.peek()�G" + que.peek());        //�q���C�Y�����X�������������C�p�G���X���ѡ]�Ū��^�^��null

		System.out.println("que.isEmpty()�G" + que.isEmpty());  //�O�Ū�^true�A�����ūh��^false

		System.out.println("que.contains(\"A\")�G" + que.contains("A"));

		System.out.println("que.size()�G" + que.size());

	}

}