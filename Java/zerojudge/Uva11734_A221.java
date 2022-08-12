package zerojudge;

import java.util.*;

// a221: 11734 - Big Number of Teams will Solve This
public class Uva11734_A221 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int t = Integer.parseInt(input.nextLine());  // 要把換行符號讀進來再把字串轉int
		String a = "", b = "";
		for( int i = 0 ; i < t ; i++ ) {
			a = input.nextLine();
			b = input.nextLine();
			System.out.print("Case " + ( i + 1 ) + ": ");
			if( a.equals(b)) { // 如果都一樣當然就yes
				System.out.println("Yes");
			} else {
				a = a.trim(); // 字串去頭去尾(空白的部分)
				b = b.trim();
				boolean check = false;
				int a1 = 0, b1 = 0; // 檢查位置用 
				while(a1 != a.length() || b1 != b.length()) {
					if(a1 == a.length()) a1 -= 1; // 防止其中一個string溢位
					if(b1 == b.length()) b1 -= 1;
					
					if(a.charAt(a1) == ' ') {
						a1++; // 遇到空白就跳過
					} else if(b.charAt(b1) == ' ') {
						b1++; // 遇到空白就跳過
					} else if(a.charAt(a1) != b.charAt(b1)) {
						check = true; // 代表內容不一樣 WA~
						break;
					} else {
						a1++; // 目前資料都一樣 繼續比對next char
						b1++;
					}
				}
				if(check == true) {
					System.out.println("Wrong Answer");
				} else {
					System.out.println("Output Format Error");
				}
			}
			/*
			// replace寫法
			if(a.equals(b)) {
				System.out.println("Yes");
			} else {
				a = a.replace(" ", "");
				b = b.replace(" ", "");
				if(a.equals(b)) {
					System.out.println("Output Format Error");
				} else {
					System.out.println("Wrong Answer");
				}
			}
			*/
		}
		input.close();
	}
}
