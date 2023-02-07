package own;
/*
 * https://ithelp.ithome.com.tw/articles/10234424
 * 課本16.4
 * 普遍情況使用（速度較快）
 */


import java.util.*;

public class HashMap_practice {
	public static void main(String[] args) {
		// 課本範例
		HashMap<Integer, String> hmap = new HashMap<Integer, String>();
		hmap.put(94001, "Fiona");
		hmap.put(94002, "Ariel");
		hmap.put(94003, "Pyan");
		System.out.println("元素個數 = " + hmap.size());
		System.out.println("HashMap的元素 = " + hmap);
		System.out.println("HashMap中是否有key94002? " + hmap.containsKey(94002));
		System.out.println("HashMap中是否有對應值Kevin? " + hmap.containsValue("Kevin"));
		hmap.remove(94001);
		System.out.println("清除key94001的value...");
		System.out.println("元素個數 = " + hmap.size());
		System.out.println("HashMap的元素 = " + hmap);  // 因為用雜湊表配置所以不會按照key排序
		System.out.println("key94003的value = " + hmap.get(94003));	
	}
}