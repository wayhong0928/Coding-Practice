#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, sum = 0, count = 0, c = 0;
	while (cin >> n)
	{
		if (n == 0)
		{
			return 0;
		}
		c++;
		sum = 0;
		count = 0;
		int * m = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> m[i];
			sum += m[i];
		}
		sum /= n;
		for (int i = 0; i < n; i++)
		{
			if (m[i] > sum)
			{
				count += m[i] - sum;
			}
		}
		cout << "Set #" << c << "\nThe minimum number of moves is " << count << ".\n";
	}
	return 0;
}
