#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int c, s, g;
	cout << "������� ����� � ����� � �������" << endl;
	cin >> c;
	cin >> s;
	g = c;
	for (int i = 1; i < s; i++)
		g *= s;
	cout << g;

	system("pause>nul");
	return 0;
}