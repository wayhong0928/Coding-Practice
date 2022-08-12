package own;

import java.util.*;
// HashMap Тр TreeSet and HashSet
public class Book_16_9 {

	public static void main(String[] args) {
		var hmap = new HashMap<Integer, Integer>();
		for( int i = 0; i < 5; i++) {
			hmap.put(i, (int)(100 * Math.random()));
		}
		var Values = new TreeSet<Integer>(hmap.values());
		var KeySet = new HashSet<Integer>(hmap.keySet());
		System.out.println("hmap = " + hmap);
		System.out.println("Values = " + Values);
		System.out.println("KeySet = " + KeySet);
	}
}
