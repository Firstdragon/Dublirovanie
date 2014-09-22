#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, d, error;
	c = 1;
	d = 0;
	error = 0;
	cout << "Введите число, в котором необходимо продублировать чётные цифры" << endl;
	cin >> a;
	if (a < 0) cout << "Неправильные входные данные" << endl;
	else
	{
		while (a > 0)
		{

			b = a % 10;
			if (b % 2 == 0 && b != 0)
			{
				d = d + c*b + c*b * 10;
				if (d < c*b) {error++; break; }
				c = c * 100;
			}
			else
			{
				d = d + c*b;
				if (d < c*b) {error++; break; }
				c = c * 10;
			}
			a = a / 10;
		}
		if (error==0)
		cout << d;
		else  cout << "Переполнение" << endl;
	}
	_getch();
	return 0;
}