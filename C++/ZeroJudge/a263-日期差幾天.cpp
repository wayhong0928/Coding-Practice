#include <iostream>
#include <cmath>

using namespace std;

int normal_months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; //平年月份天數 
int lunar_months[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};  //閏年月份天數 

bool check_lunar(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int date(int year,int month,int day)
{
    int ans = 0;
    for (int i = 1; i < year; i++)
    {
        if (check_lunar(i) == 1)
        {
            ans += 366;
        }
        else
        {
           ans += 365;
        }
    } 
    if (check_lunar(year) == 1)
    {
        for (int i = 1; i < month; i++)
        {
           ans += lunar_months[i];
        }
    }
    else
    {
        for (int i = 1; i < month; i++)
        {
          ans += normal_months[i];
        }
    }
    ans += (day - 1);
    return ans;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int a1,a2,a3,b1,b2,b3;
    while(cin >> a1 >> a2 >> a3)
    { 
        cin >> b1 >> b2 >> b3;
        int ans = abs(date(a1,a2,a3) - date(b1,b2,b3));
        cout << ans << endl;
    }
    return 0;
} 

