#include <iostream>
using namespace std;

void calculo(float x) {
	
	float agua, suco;
	
	agua = x * 0.8;
	suco = x * 0.2;
	
	cout << "Serao necessarios " << agua << " litros de agua e " << suco << " litros de suco";
	
}

int main(int argc, char** argv) {
	
	float x;
	
	cout << "Informe quantos litros de refresco voce deseja fazer: ";
	cin >> x;
	calculo(x);
	
	cout << "\n \n";   
	system("pause");
	
}
