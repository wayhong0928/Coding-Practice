package zerojudge;

import java.util.Scanner;
// 購買力（2021APCS）
public class F605_1 {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int d = input.nextInt();
		int PriceMax = 0, PriceMin = 100, PriceSum = 0, BuyNum = 0, PriceTotal = 0; //sum是單筆  total是輸出 
		int[][] price = new int[n][3];
		for( int i = 0; i < n; i++) {
			PriceMax = 0;
			PriceMin = 100;
			PriceSum = 0;
			for( int j = 0; j < 3; j++) {
				price[i][j] = input.nextInt();
				PriceSum += price[i][j];
				if(price[i][j] > PriceMax) PriceMax = price[i][j];
				if(price[i][j] < PriceMin) PriceMin = price[i][j];
			}
			if(PriceMax - PriceMin >= d) {
				BuyNum += 1;
				PriceTotal += (PriceSum) / 3;
			}
		}
		System.out.print(BuyNum + " " + PriceTotal);
		input.close();
	}
}