#include <iostream>
/*
������ ���������
*/
using namespace std; //������������ ��� ��������� (��� �������� ������� std::cout)

int povtor()
{
	//���� ����
	int F = 0;
	while (F < 10)
	{
		F++;
		cout << F << " ";
	}
	cout << endl;

	//��������� ��
	int P=0;
	do
	{
		P++;
		cout << P << " ";
	} while (P < 10);
	cout << endl;

	//���� for
	for (int i = 0; i < 11;i++)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}

void main() //����� ���������
{
	setlocale(LC_ALL,"RUS"); //��������� �������� �����
	system("cls"); //����� ���� ������
	povtor();
	cout << "hello world\n";
	/*������ ������� (\n -  ������� �� ����� ������,
	\b - ������� ��������� ������,
	\t - ���������
	*/

	//���������
	bool X1 = true; // ��� false - ���������� ��������� (1 ����)
	char X2 = '�'; // �������, ����� (1 ����)
	short X3 = 1234; //����� ����� (2 �����)
	int X4 = 123456789; // ��� long ����� �����  (4 �����)
	float X5 = 123.456; //����� � ������ (4 �����)
	double X6 = 12345.6789; //������� ���������� ����� (8 ����)
	cout << X1 << " " << X2 << " " << X3 << " " << X4 << " " << X5 << " " << X6<<endl;
	const int X = 7; //���������(�� ��������)
	int Y1, Y2, Z1, Z2; //�������� �������� ����
	//������������ �������� 
	X4 = -X4;//����� �����     
	X4 = X4 + 59; //�������� (- ���������, * ���������, / �������)
	X4 = X4 % 2; //������� �� �������
	X4++; //������� +1
	X4--; //������ -1
	++X4; // ������ � ����������� (+1 ����������� � ������ �������) --X4 ���� ����� -1
	X4 += 5; // ������ -5
	cin >> X4; // ��� �����
	X4 = (double) X4 / 3; // ����� ���� ���������
	X4 = rand(); //��������� �����
	X4 = rand()%10+1; //��������� ����� �� 1 �� 10
	
	//�������� ������� (���� - �� - �����)
	if (X4 == 10) // != �� ����� (��� ><), >= ������ ��� �����, <= ������� (&& - �) (|| - ���)
	{
		X4 = 10;
	}
	else if (X4 == 20)
	{
		X4 = 50;
	}
	else
	{
		X4 = 30; 
	}

	// ����� (? - � �������������)
abc:
goto abc;


	//�����
	int S;
	cin >> S;
	switch (S)
	{
	case 1:
		cout << "����� 1" << endl;
		break; //������� ����� ( continue; - ��������������� � ���������� ����)
	case 2:
		cout << "����� 2" << endl;
		break;
	case 3:
	{
		cout << "����� 3" << endl;
		cout << "����� 3" << endl;
		cout << "����� 3" << endl;
	}
		break;
	default: //����� ����� ����������
		cout << "����� ������" << endl;
		break;
	}

	//�����																									

system("pause>nul"); //pause
}