#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	int a, b, c;
	
	cout << ("������� ����� A: ");
	cin >> a;
	cout << ("������� ����� B: ");
	cin >> b;

	c = a;
	a = b;
	b = c;
	cout << ("����� � �������������� ����������") << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	a ^= b ^= a ^= b;
	cout << ("����� ��� �������������� ����������") << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	

	system("pause>nul");
	return 0;
}