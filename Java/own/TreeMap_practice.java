package own;
/*
 * �ҥ�16-24
 * https://codertw.com/%E7%A8%8B%E5%BC%8F%E8%AA%9E%E8%A8%80/296071/
 * �ݭn�ƧǮɦA�ϥ�
 */
import java.util.*;

public class TreeMap_practice {
	public static void main(String[] args) {
		int k1 = 94001, k2 = 94003, key;
		TreeMap<Integer, String> tmap = new TreeMap<Integer, String>();
		tmap.put(94001, "Fiona");
		tmap.put(94002, "Ryan");
		tmap.put(94003, "Ariel");
		tmap.put(94004, "Jack");
		System.out.println("�����Ӽ� = " + tmap.size());
		System.out.println("TreeMap������ = " + tmap);
		key = tmap.firstKey();
		System.out.println("��0�Ӥ��� = " + key + ", " + tmap.get(key));
		key = tmap.lastKey();
		System.out.println("�̫�@�Ӥ��� = " + key + ", " + tmap.get(key));
		System.out.println("����" + k1 + "�M" + k2 + "��Treemap = " + tmap.subMap(k1, k2)); //����k1, k2�� tmap ����
		System.out.println("�j�󵥩�" + k2 + "��TreeMap = " + tmap.tailMap(k2)); // key>k2�� tmap ����
	}
}