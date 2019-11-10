#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
    int i, n; 
	double a, sum = 0;

    cout << "Введите N, затем A. " << endl;
    cin >> n >> a;

	if (n > 0)
	{
		for(i = 0; i <= n; i++)
		{
			sum = sum + pow(a, i);
		}
		cout << "Сумма равна " << sum << endl;
	}
	else
	{
	cout << "N должен быть больше нуля. Попробуйте еще раз." << endl;
	}

	system("pause");
    return 0;
}
