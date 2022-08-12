package own;

import java.util.*;
// ½Ò¥»13-18­¶
public class Exception_num_str {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int num = 0;
		try {
			System.out.print("enter a number : ");
			num = input.nextInt();
			System.out.println("num = " + num);
		} catch(Exception e) {
			System.out.println("©ß¥X " + e + " ¨Ò¥~");
		}
		input.close();
	}
}
