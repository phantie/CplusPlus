#include <iostream>
using namespace std;
int main()
{
	/*setlocale(0, "ru");
	char n;
	cout << "Введите символ: ";  
	cin >> n;
	if ((n == '.') || (n == '!') || (n == '?') || (n==',')) 
		cout << "Символ являеться знаком пунктуации.\n";     
	else if ((n >= '0') && (n <= '9'))
		cout << "Символ являеться цифрой.\n";
	else if ((n >= 'a') && (n <= 'z'))
		cout << "Символ являеться буквой.\n";*/
	
	
	/*setlocale(0, "ru");
	int n, m, a;
	cout << "Введите N:";
	cin >> n;
	cout << "Введите M:";
	cin >> m;
	cout << "Введите число для проверки:";
	cin >> a;
	if ((a >= n) && (a <= m))
		cout << " Число " << a << " принадлежит диапазону от " << n << " - " << m << endl;
	else
		cout << " Число " << a << " не принадлежит диапазону от " << n << " - " << m << endl;*/



    /*setlocale(0, "ru");
	int x, y;
	cout << "Введите X:\n";
	cin >> x;                                       
	cout << "Введите Y:\n";
	cin >> y;
	double rase = x%y;
	if (rase == 0)
		cout << x << " кратно " << y << endl;
	else
		cout << x << " не кратно " << y << endl;*/



	/*setlocale(0, "ru");
	int a;
	cout << "Введите a:";
	cin >> a;
	double trueA1=a%3;
	double trueA2 = a % 5;
	double trueA3 = a % 7;
	if ((trueA1==0) && (trueA2==0) && (trueA3==0))
		cout << "Число " << a << " кратно 3,5,7.\n";
	else
		cout << "Число " << a << " не кратно 3,5,7.\n";*/



	/*setlocale(0, "ru");
	int a;
	cout << "Введите число:\n";
	cin >> a;
	int ma = -a;                              
	cout << "Модуль числа " << a << " = " << ma << endl;*/
	

    /*setlocale(0, "ru");
    int a, summ=0;
    cout << "Введите число(не более 4 разрядов):\n";
    cin >> a;
    int a1 = a % 10;
    int a2 = a % 100 / 10;
    int a3 = a / 100 % 10;
    int a4 = a / 1000;
    if (a1 != 0)
    summ += a1 / a1;
    if (a2 != 0)
    summ += a2 / a2;
    if (a3 != 0)
    summ += a3 / a3;
    if (a4 != 0)
    summ += a4 / a4;
    cout << "Колличество знаков в числе " << a << " = " << summ << endl;*/
		

	/*setlocale(0, "ru");
	int a;
	cout << "Введите число(5 разрядов):\n";
	cin >> a;
	int a1 = a % 10;
	int a2 = a % 100/10;
	int a4 = a / 1000 % 10;
	int a5 = a / 10000;
	if ((a1 == a5) && (a2 == a4))
		cout << "Число является палиндромом.\n" << endl;
	else 
		cout << "Число не является палиндромом.\n" << endl; */

	/*setlocale(0, "ru");
	int x1, x2, y1, y2, xp, yp;
	cout << "Введите координаты верхнего левого угла(X):\n";
	cin >> x1;
	cout << "Введите координаты верхнего левого угла(Y):\n";
	cin >> y1;
	cout << "Введите координаты левого нижнего угла(X):\n";
	cin >> x2;
	cout << "Введите координаты левого нижнего угла(Y):\n";
	cin >> y2;
	cout << "Введите координаты прозвольной точки(X):\n";
	cin >> xp;
	cout << "Введите координаты прозвольной точки(Y):\n";
	cin >> yp;
	if (xp >= x1&&xp <= x2 && yp <= y1&&yp >= y2)
		cout << "Точка с координатами (" << xp << ";" << yp << ") принадлежит данному четырехугольнику." << endl;
	else 
		cout << "Точка с координатами (" << xp << ";" << yp << ") не принадлежит данному четырехугольнику." << endl;*/
}


