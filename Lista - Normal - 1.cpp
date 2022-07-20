#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	
	float vt, vd, vc;
	int vdi;
	
	
	cout << "Informe o valor total do prato: ";
	cin >> vt;
	
	vd = vt / 3;
	
	vdi = vd;

	vc = vt - (2 * vdi);

	cout << "O valor que Felipe pagara sera: R$" << vc << "\n";

	cout << "Carlos e Andre irao pagar cada um: R$" << vdi;
	
	cout << "\n  \n";
	system("pause");
	return 0;
}
