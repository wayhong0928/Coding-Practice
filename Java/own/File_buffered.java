package own;

import java.io.*;

public class File_buffered {
	public static void main(String[] args) throws IOException {
		System.out.println("-----BufferedReader-----");
		String str = "";
		FileReader fr = new FileReader("D:\\github-repo\\Coding Practice\\Java\\own\\data.txt");
		BufferedReader bfr = new BufferedReader(fr);
		int count = 0;
		while((str = bfr.readLine()) != null) { // 每次讀取一行，直到EOF
			count++;
			System.out.println(str);
		}
		System.out.println(count + " lines read");
		fr.close();
		bfr.close();
		
		System.out.println("-----BufferedWriter-----");
		
		FileWriter fw = new FileWriter("D:\\github-repo\\Coding Practice\\Java\\own\\data.txt");
		BufferedWriter bfw = new BufferedWriter(fw);
		for( int i = 0; i <= 5; i++ ) {
			bfw.write(Double.toString(Math.random())); // 寫入亂數到緩衝區
			bfw.newLine();
		}
		bfw.flush();  // 將緩衝區內的資料寫到檔案裡
		bfw.close();
		fw.close();
	}
}
