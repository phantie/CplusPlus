#include <iostream>
using namespace std;
int main()
{
	/*setlocale(0, "ru");
	char n;
	cout << "������� ������: ";  
	cin >> n;
	if ((n == '.') || (n == '!') || (n == '?') || (n==',')) 
		cout << "������ ��������� ������ ����������.\n";     
	else if ((n >= '0') && (n <= '9'))
		cout << "������ ��������� ������.\n";
	else if ((n >= 'a') && (n <= 'z'))
		cout << "������ ��������� ������.\n";*/
	
	
	/*setlocale(0, "ru");
	int n, m, a;
	cout << "������� N:";
	cin >> n;
	cout << "������� M:";
	cin >> m;
	cout << "������� ����� ��� ��������:";
	cin >> a;
	if ((a >= n) && (a <= m))
		cout << " ����� " << a << " ����������� ��������� �� " << n << " - " << m << endl;
	else
		cout << " ����� " << a << " �� ����������� ��������� �� " << n << " - " << m << endl;*/



    /*setlocale(0, "ru");
	int x, y;
	cout << "������� X:\n";
	cin >> x;                                       
	cout << "������� Y:\n";
	cin >> y;
	double rase = x%y;
	if (rase == 0)
		cout << x << " ������ " << y << endl;
	else
		cout << x << " �� ������ " << y << endl;*/



	/*setlocale(0, "ru");
	int a;
	cout << "������� a:";
	cin >> a;
	double trueA1=a%3;
	double trueA2 = a % 5;
	double trueA3 = a % 7;
	if ((trueA1==0) && (trueA2==0) && (trueA3==0))
		cout << "����� " << a << " ������ 3,5,7.\n";
	else
		cout << "����� " << a << " �� ������ 3,5,7.\n";*/



	/*setlocale(0, "ru");
	int a;
	cout << "������� �����:\n";
	cin >> a;
	int ma = -a;                              
	cout << "������ ����� " << a << " = " << ma << endl;*/
	

    /*setlocale(0, "ru");
    int a, summ=0;
    cout << "������� �����(�� ����� 4 ��������):\n";
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
    cout << "����������� ������ � ����� " << a << " = " << summ << endl;*/
		

	/*setlocale(0, "ru");
	int a;
	cout << "������� �����(5 ��������):\n";
	cin >> a;
	int a1 = a % 10;
	int a2 = a % 100/10;
	int a4 = a / 1000 % 10;
	int a5 = a / 10000;
	if ((a1 == a5) && (a2 == a4))
		cout << "����� �������� �����������.\n" << endl;
	else 
		cout << "����� �� �������� �����������.\n" << endl; */

	/*setlocale(0, "ru");
	int x1, x2, y1, y2, xp, yp;
	cout << "������� ���������� �������� ������ ����(X):\n";
	cin >> x1;
	cout << "������� ���������� �������� ������ ����(Y):\n";
	cin >> y1;
	cout << "������� ���������� ������ ������� ����(X):\n";
	cin >> x2;
	cout << "������� ���������� ������ ������� ����(Y):\n";
	cin >> y2;
	cout << "������� ���������� ����������� �����(X):\n";
	cin >> xp;
	cout << "������� ���������� ����������� �����(Y):\n";
	cin >> yp;
	if (xp >= x1&&xp <= x2 && yp <= y1&&yp >= y2)
		cout << "����� � ������������ (" << xp << ";" << yp << ") ����������� ������� ����������������." << endl;
	else 
		cout << "����� � ������������ (" << xp << ";" << yp << ") �� ����������� ������� ����������������." << endl;*/
}


