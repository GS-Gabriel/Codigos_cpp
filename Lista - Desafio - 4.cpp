#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a0, q, n;
    cout << "Digite o primeiro termo da PG: " << endl;
    cin >> a0;

    cout << "Digite a razao da PG: " << endl;
    cin >> q;

    cout << "Digite a quantiade n de termos desejada: " << endl;
    cin >> n;
	
	cout << endl;
	cout << "Os termos da PG sao:" << endl;
	
    for (int i = 0; i <= n; i++)
    {
        cout << "a" << i << " = " << (a0*pow(q, i)) << endl;
    }

    cout << endl;
	system("pause");
}
