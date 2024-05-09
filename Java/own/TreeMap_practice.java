package own;
/*
 * 課本16-24
 * 需要排序時再使用
 */
import java.util.*;

public class TreeMap_practice {
	public static void main(String[] args) {
		int k1 = 94001, k2 = 94003, key;
		TreeMap<Integer, String> tmap = new TreeMap<Integer, String>();
		tmap.put(94001, "Fiona");
		tmap.put(94002, "Ryan");
		tmap.put(94003, "Ariel");
		tmap.put(94004, "Jack");
		System.out.println("元素個數 = " + tmap.size());
		System.out.println("TreeMap的元素 = " + tmap);
		key = tmap.firstKey();
		System.out.println("弟0個元素 = " + key + ", " + tmap.get(key));
		key = tmap.lastKey();
		System.out.println("最後一個元素 = " + key + ", " + tmap.get(key));
		System.out.println("介於" + k1 + "和" + k2 + "的Treemap = " + tmap.subMap(k1, k2)); //介於k1, k2的 tmap 物件
		System.out.println("大於等於" + k2 + "的TreeMap = " + tmap.tailMap(k2)); // key>k2的 tmap 物件
	}
}