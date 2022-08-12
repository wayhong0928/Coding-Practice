#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int * m = new int [n];
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << m[i] << " ";
	}
	cout << endl;
	delete[] m;
	return 0;
}
