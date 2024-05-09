package own;

import java.io.*;

public class File_basic {

	public static void main(String[] args) throws IOException {
		char data[] = new char[128];
		FileReader fr = new FileReader("D:\\wayhong\\Java\\own\\data.txt");
		int num = fr.read(data);
		String str = new String(data, 0, num);  // 將字元陣列轉換成字串  換行符號 = 兩個字元
		System.out.println("Characters tead = " + num);
		System.out.println(str);
		fr.close();
		
		System.out.println("-----write-----");
		
		FileWriter fw = new FileWriter("D:\\wayhong\\Java\\own\\data.txt");  
		// 如果加上true代表資料附加在原先資料後面，只有檔案路徑 = 覆寫
		str = "12\n24\n46\n68\n80";
		fw.write(str);
		fw.close();
	}
}
