//5.House: �����, ����, ���������� ������, �������.
//������� ������ ��������.������� :
//	a) ������ �������, ������� �������� ����� ������;
//	b) ������ �������, ������� �������� ����� ������, � ������������� �� �����, ������� ��������� � �������� ����������;
//	c) ������ �������, ������� �������, ������������� ��������.

#include<iostream>
#include "House.h"
#include<fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	House f[5];
	ifstream in;
	in.open("house.txt");
	if (!in.is_open())
	{
		cout << "Error"<<endl;
	}
	else
	{
		cout << "���� ������!" << endl;
	
		while (in.eof())
		{
			for (int i = 0;i < 5;i++)
			{
				in >> f[i];
			}
			
		}
		
	}
	in.close();
	system("pause");
	return 0;
}