#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	int N;
	double i, j, result; 

	result = 1;
	j = 1.1;
	cout << "Введите количество сомножителей." << endl;
	cin >> N;

	if (N > 0)
	{
		for (i = 0; i < N; i ++, j += 0.1)
		{
			result = result * j;
		}
		cout << "Произведение равно " << result << endl;
	}
	else
	{
		cout << "Количество множителей должно быть больше нуля. Попробуйте еще раз." << endl;
	}

	system("pause");
	return 0;
}
