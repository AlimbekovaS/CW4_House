//5.House: Адрес, Этаж, Количество комнат, Площадь.
//Создать массив объектов.Вывести :
//	a) список квартир, имеющих заданное число комнат;
//	b) список квартир, имеющих заданное число комнат, и расположенных на этаже, который находится в заданном промежутке;
//	c) список квартир, имеющих площадь, превосходящую заданную.

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
		cout << "Файл открыт!" << endl;
	
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