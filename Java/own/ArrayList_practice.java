package own;

import java.util.ArrayList;

public class ArrayList_practice {

	public static void main(String[] args) {
		/*
		 * 浮動大小的Array，可以隨意更改大小，是list interface 的實作
		 * URL：https://ithelp.ithome.com.tw/articles/10229699
		 * 結合大數運算參考Uva00495_C121
		 */
		ArrayList<Integer> arrL = new ArrayList<Integer>(2);
		arrL.add(1);
		arrL.add(2);
		System.out.println(arrL.get(0));
		
		// 課本範例 16-20
		ArrayList<Integer> list = new ArrayList<Integer>();
		for( int i = 0; i <= 50; i += 10 ) {
			list.add(i);
		}
		list.add(3, 200);
		list.add(0, 300);
		list.add(400);
		System.out.println("元素個數= " + list.size());
		System.out.println("ArrayList的元素：" + list);
		System.out.println("將索引值1的元素以200取代...");
		list.set(1, 200);
		System.out.println("ArrayList的元素：" + list);
		System.out.println("第一個元素為200的索引值 = " + list.indexOf(200));
		System.out.println("最後一個元素值為200的索引值 = " + list.lastIndexOf(200));
		// for - each
		for( int i : list) {
			System.out.print(i + " ");
		}
	}

}
