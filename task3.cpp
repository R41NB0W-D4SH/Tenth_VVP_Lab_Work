#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
    int n, sum;

	sum = 0;
    cout << "Введите число N" << endl;
    cin >> n;

    cout << "Сейчас сумма равна " << sum << endl;

    for(int i = 1; i <= 2 * n - 1; i += 2) 
	{
        sum += i;
        cout << "Теперь сумма равна " << sum << endl;
    }

    cout << "Квадрат N равен " << sum << endl;

	system("pause");
    return 0;
}
