package zerojudge;

import java.util.*;
// c005: 10300 - Ecological Premium
public class Uva10300_C005 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		long ans = 0, f = 0, area = 0, num = 0, rec = 0;   // �����`�ơB�A�Ҽƶq�B�A�����n�B�ʪ��ƥءB���O����
		while(n > 0) {
			f = input.nextLong();         // �A�Ҽƶq
			ans = 0;                         // �����k�s
			while( f > 0 ) {
				area = input.nextLong();  // �A�����n
				num = input.nextLong();   // �ʪ��ƥ�
				rec = input.nextLong();   // ���O����
				ans += area * rec;		  // ���n * ���O = ����
				f--;
			}
			System.out.println(ans);
			n--;
		}
		input.close();
	}
}
