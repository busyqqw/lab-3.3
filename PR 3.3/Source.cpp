// Lab_03_3.cpp
// < ��������� ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R1; // ������� ��������
	double y; // ��������� ���������� ������
	double R2; // ������� ��������
	cout << "R1 = "; cin >> R1;
	cout << "x = "; cin >> x;
	cout << "R2 = "; cin >> R2;
	// ������������ � ����� ����
	if (x <= -6)
		y = 1;
	else
		if (-6 < x && x <= -2 * R2)
			y = (2 * R2 + 12 + x) / (2 * R2 + 6);
		else
			if (-2 * R2  < x && x <= 0)
				y = sqrt(pow(-3 * R2 , 2)) - pow(x, 2) - 4 * x * R2;
			else
				if (0 < x && x <= 2 * R1)
					y = - sqrt(pow(R1, 2) - pow(x, 2));
				else
					y = -x + 2 * R2;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}