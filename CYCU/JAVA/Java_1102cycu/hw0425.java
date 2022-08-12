import java.util.Scanner;

public class hw0425 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
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
			}
			System.out.println(sums[i]);
			if(sums[i] > maxs) {
				maxs = sums[i];
				cks = i;
			}
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