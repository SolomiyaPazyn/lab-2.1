// Lab_02.cpp
// < �����, ������ >
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 25

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double alpha;  // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2;  // ��������� ���������� 2-�� ������
	// �������� �������� �����

	cout << "alpha ="; cin >> alpha;

	z1 = 1 - (1.0 / 4) * pow(sin(2 * alpha), 2) + cos(2 * alpha);
	z2 = pow(cos(alpha), 2) + pow(cos(alpha), 4);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}