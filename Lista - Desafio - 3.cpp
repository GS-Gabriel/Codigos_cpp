#include <iostream>

using namespace std;

int main()
{
    double a0, r, n;
    cout << "Digite o primeiro termo da PA: " << endl;
    cin >> a0;

    cout << "Digite a razao da PA: " << endl;
    cin >> r;

    cout << "Digite a quantiade n de termos desejada: " << endl;
    cin >> n;

	cout << endl;
	cout << "Os termos da PA sao:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << "a" << i << " = " << (a0 + i*r) << endl;
    }

    cout << endl;
	system("pause");
}
