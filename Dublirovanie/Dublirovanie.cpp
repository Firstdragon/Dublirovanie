#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, d;
	c = 1;
	d = 0;
	cout << "¬ведите число, в котором необходимо продублировать чЄтные цифры" << endl;
	cin >> a;
	while (a > 0)
	{

		b = a % 10;
		if (b % 2 == 0 && b != 0)
		{
			d = d + c*b + c*b * 10;
			c = c * 10;
		}
		else
		{
			d = d + c*b;
		}
		a = a / 10;
		c = c * 10;
	}
	if (d>0)
	cout << d;
	else cout << "ѕереполнение" << endl;
	_getch();
	return 0;
}