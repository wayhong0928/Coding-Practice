#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string a;
	while (cin >> a)
	{
		cout << char(a[0] - 32);
		for (int i = 1; i < a.length(); i++)
		{
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}
