package own;

import java.util.*;
// HashMap ?? TreeSet and HashSet
public class Book_16_9 {

	public static void main(String[] args) {
		HashMap<Integer, Integer> hmap = new HashMap<Integer, Integer>();
		for( int i = 0; i < 5; i++) {
			hmap.put(i, (int)(100 * Math.random()));
		}
		TreeSet<Integer> Values = new TreeSet<Integer>(hmap.values());
		HashSet<Integer> KeySet = new HashSet<Integer>(hmap.keySet());
		System.out.println("hmap = " + hmap);
		System.out.println("Values = " + Values);
		System.out.println("KeySet = " + KeySet);
	}
}
