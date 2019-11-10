#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
    int i, n, sum;
	
	sum = 0;
    cout << "Введите число N" << endl;
    cin >> n;

	if (n > 0)
	{
	    cout << "Сейчас сумма равна " << sum << endl;
	    for(i = 1; i <= 2 * n - 1; i += 2) 
		{
		sum = sum + i;
		cout << "Теперь сумма равна " << sum << endl;
	    }

	    cout << "Квадрат N равен " << sum << endl;
	}
	else
	{
		cout << "Количество множителей должно быть больше нуля. Попробуйте еще раз." << endl;
	}
	
	system("pause");
    return 0;
}
