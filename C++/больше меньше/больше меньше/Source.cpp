//���� ������-������.
//������ �������� 
//11.08.2018 ����, ����.
#include <iostream>
#include <ctime>
using namespace std;
void main()

{
	//START
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

start:
	int F,D=0;
	F = rand() % 1000 + 1;

	//��������� �����
	PADS:
	int Z;
	cin >> Z;
	D++;
	system("cls");
	//���������
	if (F == Z)
	{
		cout << "�� ��������" << endl;
		cout << "����� �������:" << D << endl;
		goto start;
	}

	if (F > Z)
	{
		cout << "����� �����e" << endl;
		cout << "����� �������:" << D << endl;
		goto PADS;
	}

	if (F < Z)
	{
		cout << "����� ������ " << endl;
		cout << "����� �������: " << D << endl;
		goto PADS;
	}	
}