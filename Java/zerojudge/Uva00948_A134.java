package zerojudge;

import java.util.Scanner;
// a134: 00948 - Fibonaccimal Base
public class Uva00948_A134 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int test = 0;
		boolean check = false; //檢查用
		String ans = ""; // 答案
		// 建立費式數列表，題目最多給到100, 000, 000
		int[] f = new int[40];
		f[0] = 0;
		f[1] = 1;
		for( int i = 2; i < 40 ; i++ ) {
			f[i] = f[i-1] + f[i-2];
		}
		// 建表完成 開始讀資料
		while(n > 0) {
			ans = "";
			test = input.nextInt();
			System.out.print(test);
			// 由大到小線性搜尋
			for( int i = 39; i > 1 ; i-- ) {
				// 如果test > 費式數列的值 而且上一個數字沒有符合前面的條件就開減
				if(test >= f[i] && check == false) {
					ans += "1";
					test -= f[i];
					// 設定 bool 下一個數字就會到else執行
					check = true;
				} else {
					check = false;
					// 第一個一定是1 所以 ans 如果還是空值都不能加上0
					if(ans != "") ans += "0";
				}
			}
			System.out.println(" = " + ans + " (fib)");
			n--;
		}
		input.close();
	}
}
