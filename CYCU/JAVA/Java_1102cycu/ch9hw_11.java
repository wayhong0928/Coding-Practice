import java.util.Scanner;
//9_11
class CRational {
	public int n, d;
	public void setND(int num, int den) {
		n = num;
		d = den;
	}
	public CRational add(CRational r) { // 加法 分子:兩邊分子*分母相加 分母:直接相乘
		show(this, r, '+');
		CRational ans = new CRational();
		ans.n = this.n * r.d + this.d * r.n;
		ans.d = this.d * r.d;
		return ans;
	}
	public CRational sub(CRational r) { // 減法 分子:兩邊分子*分母相減 分母:直接相乘
		show(this, r, '-');
		CRational ans = new CRational();
		ans.n = this.n * r.d - this.d * r.n;
		ans.d = this.d * r.d;
		return ans;
	}
	public CRational mul(CRational r) { // 乘法
		show(this, r, '*');
		CRational ans = new CRational();
		ans.n = this.n * r.n;
		ans.d = this.d * r.d;
		return ans;
	}
	public CRational div(CRational r) { // 除法 乘倒數
		show(this, r, '/');
		CRational ans = new CRational();
		ans.n = this.n * r.d;
		ans.d = this.d * r.n;
		return ans;
	}
	public void show(CRational a, CRational b, char c) { // print a=第一組分數 b=第二組 c=運算符號
		System.out.print("(" + a.n + "/" + a.d + ")" + c + "(" + b.n + "/" + b.d + ") = ");
	}
}

public class ch9hw_11 {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		CRational a = new CRational();
		CRational b = new CRational();
		CRational c;
		a.setND(2, 5);  // 這組分數自己設定
		b.setND(3, 6);  // 這組分數自己設定
		c = a.add(b);
		show(c);
		c = a.sub(b);
		show(c);
		c = a.mul(b);
		show(c);
		c = a.div(b);
		show(c);
	}
	public static void show(CRational obj) {
		System.out.println(obj.n + "/" + obj.d);
	}
}