package own;
/*
 * https://ithelp.ithome.com.tw/articles/10234424
 * �ҥ�16.4
 * ���M���p�ϥΡ]�t�׸��֡^
 */


import java.util.*;

public class HashMap_practice {
	public static void main(String[] args) {
		// �ҥ��d��
		HashMap<Integer, String> hmap = new HashMap<Integer, String>();
		hmap.put(94001, "Fiona");
		hmap.put(94002, "Ariel");
		hmap.put(94003, "Pyan");
		System.out.println("�����Ӽ� = " + hmap.size());
		System.out.println("HashMap������ = " + hmap);
		System.out.println("HashMap���O�_��key94002? " + hmap.containsKey(94002));
		System.out.println("HashMap���O�_��������Kevin? " + hmap.containsValue("Kevin"));
		hmap.remove(94001);
		System.out.println("�M��key94001��value...");
		System.out.println("�����Ӽ� = " + hmap.size());
		System.out.println("HashMap������ = " + hmap);  // �]���������t�m�ҥH���|����key�Ƨ�
		System.out.println("key94003��value = " + hmap.get(94003));	
	}
}