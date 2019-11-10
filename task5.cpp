#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
    int i, n;
	double a, b, sum = 0;

    cout << "Введите N, затем A " << endl;
    cin >> n >> a;

    for(i = 0; i < n; i++) 
	{
        b = pow(-1, i) * pow(a, i);
        sum = sum + b;
    }

    cout << "Сумма равна " << sum << endl;

	system("pause");
    return 0;
}
