#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	float cost, i;

	cout << "Введите цену за 1 кг конфет." << endl;
	cin >> cost;

	for (i = 0.1; i <= 1.1; i += 0.1)
	{
		cout << "Стоимость " << i << " кг конфет равна " << cost*i << " валюты" << endl;
	}
		
	system("pause");
	return 0;
}
