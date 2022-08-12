import java.util.Scanner;

public class test0425 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		/*
		// 3
		int a[] = {53, 27, 69, 12, 3, 96};
		int c1 = 0, c2 = 0, max = 0, min = 100;
		for(int i = 0; i < 6; i++) {
			if(a[i] % 2 == 0) {
				c2 += 1;
			} else {
				c1 += 1;
			}
			if(a[i] > max) max = a[i];
			if(a[i] < min) min = a[i];
			System.out.print(a[i] + " ");
		}
		System.out.println("\n奇數：" + c1 + "個，偶數： " + c2 + "個");
		System.out.println("Max = " + max + "，min = " + min);
		

		// 6
		int list[] = {20, 2, 9, 28, 91, 15, 4};
		int max = 0, MaxIndex = 0, min = 100, MinIndex = 0;
		for(int i = 0; i < list.length; i++) {
			System.out.print(list[i] + " ");
			if(list[i] > max) {
				max = list[i];
				MaxIndex = i;
			}
			if(list[i] < min) {
				min = list[i];
				MinIndex = i;
			}
		}
		System.out.println("\n最大值的索引值 = " + (MaxIndex + 1));
		System.out.println("最小值的索引值 = " + (MinIndex + 1));
		
		*/
		// 8
		/*
		double tp[][] = {
			{18.2, 17.3, 15.0, 13.4},
			{23.8, 25.1, 20.6, 17.8},
			{20.6, 21.5, 18.4, 15.7}
		};
		double sum[] = new double[4]; // 每日均溫
		double avg[] = new double[3]; // 時段均溫
		double max = 0, min = 100;
		int maxday = 0, maxtime = 0, minday = 0, mintime = 0; //最高最低溫度
		System.out.println("----------------------------------------------------------");
		System.out.println("	星期一	星期二	星期三	星期四");		
		for(int i = 0; i < 3; i++) {
			System.out.print("時段" + (i + 1) + "	");
			for(int j = 0; j < 4; j++) {
				System.out.print(tp[i][j] + "	");
				sum[j] += tp[i][j];
				avg[i] += tp[i][j];
			}
			System.out.println("");
		}
		System.out.println("----------------------------------------------------------");
		for(int i = 0; i < 4; i++) {
			System.out.println("星期 " + (i + 1) + " 的平均溫度 = " + (sum[i] / 3));
		}
		for(int i = 0; i < 3; i++) {
			System.out.println("時段 " + (i + 1) + " 的平均溫度 = " + (avg[i] / 4));
		}
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 4; j++) {
				if(tp[i][j] > max) {
					max = tp[i][j];
					maxday = j;
					maxtime = i;
				}
				if(tp[i][j] < min) {
					min = tp[i][j];
					minday = j;
					mintime = i;
				}
			}
		}
		System.out.println("星期 " + (maxday + 1) + " 的時段 " + (maxtime + 1) + " 溫度最高");
		System.out.println("星期 " + (minday + 1) + " 的時段 " + (mintime + 1) + " 溫度最低");
		*/
		
		// 9
		int num[][] = {
			{33, 32, 56, 45, 33},
			{77, 33, 68, 45, 23},
			{43, 55, 43, 67, 65}
		};
		int price[] = {12, 16, 10, 14, 15};
		int sums[] = new int[3]; // 銷售員銷售總金額
		int sump[] = new int[5]; // 產品銷售總金額
		int maxs = 0, maxp = 0; // 業績最好銷售員  銷售金額最多產品
		int cks = 0, ckp = 0;  //對位
		System.out.println("銷售員	產品A	產品B	產品C	產品D	產品E	total");
		for(int i = 0; i < 3; i++) {
			System.out.print("    " + (i+1) + "\t");
			for(int j = 0; j < 5; j++) {
				System.out.print(num[i][j] + "\t");
				sums[i] += num[i][j] * price[j];
				sump[j] += num[i][j] * price[j];
				if(sums[i] > maxs) {
					maxs = maxs;
					cks = i;
				}
			}
			System.out.println(sums[i]);
		}
		System.out.println("------------------------------------------------------------------");
		System.out.print("  total\t");
		for(int i = 0; i < 5; i++) {
			System.out.print(sump[i] + "\t");
			if(sump[i] > maxp) {
				maxp = sump[i];
				ckp = i;
			}
		}
		System.out.println("");
		System.out.println("業績最好的銷售員 = " + (cks + 1));
		System.out.println("業績最好的產品是 = " + (char)(ckp + 65));		
		
	}
}