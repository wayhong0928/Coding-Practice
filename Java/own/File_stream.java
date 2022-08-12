package own;

import java.io.*;

public class File_stream {

	public static void main(String[] args) throws IOException {
		System.out.println("-----File Input Stream-----");
		FileInputStream fi = new FileInputStream("D:\\wayhong\\Java\\own\\data.txt");
		System.out.println("file size = " + fi.available());
		byte ba[] = new byte[fi.available()]; // 建立 byte 陣列
		fi.read(ba); // 將讀取的內容寫到陣列 ba 裡
		System.out.println(new String(ba)); // 印出陣列 ba 的內容
		fi.close();
		
		System.out.println("-----File Output Stream-----");
		// 課本14-16頁 用gif做示範
	}
}
