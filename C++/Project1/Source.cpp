#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	int a1, b1, a2, b2;
	cout << ("������ ����� 'int_A1' ");
	cin >> a1;
	cout << ("������ ����� 'int_B1' ");
	cin >> b1;
	cout << ("������ ����� 'int_A2' ");
	cin >> a2;
	cout << ("������ ����� 'int_B2' ");
	cin >> b2;

	if (b1 == 0)
		cout << ("�� ���� ������ ������");
	else

		cout << (a1 + b1) << endl;
		cout << (a1 - b1) << endl;
		cout << (a1 * b1) << endl;
		cout << (a1 / b1) << endl;

		cout << (a1 + b2) << endl;
		cout << (a1 - b2) << endl;
		cout << (a1 * b2) << endl;
		cout << (a1 / b2) << endl;

		cout << (a2 + b2) << endl;
		cout << (a2 - b2) << endl;
		cout << (a2 * b2) << endl;
		cout << (a2 / b2) << endl;

		cout << (a2 + b1) << endl;
		cout << (a2 - b1) << endl;
		cout << (a2 * b1) << endl;
		cout << (a2 / b1) << endl;

	


	system("pause>nul");
	return 0;
}