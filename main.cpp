#include<iostream>
using namespace std;

//#define PIFAGOR
//#define MULTI_TABLE
//#define POW

void main()

{
	setlocale(LC_ALL, "RUS");

#ifdef PIFAGOR
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << " " << i * j << " ";
		}
		cout << endl;
	}
#endif // PIFAGOR

#ifdef MULTI_TABLE

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << "  " << i << "*" << j << "=" << i * j << endl;
		}
		cout << endl;
	}

#endif // MULTI_TABLE

#ifdef POW
	int n, a; double pow = 1;
	cout << "¬ведите число: "; cin >> a;
	cout << "¬ведите степень: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		pow *= a;
	}
	cout << pow;

#endif // POW


}