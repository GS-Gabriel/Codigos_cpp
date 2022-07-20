#include <iostream>
using namespace std;

int main (int argc, char** argv){
	
	int veta[10];
	int vetb[10];
	int vetc[10];
	
	
	for (int i = 0; i <= 9; i++){
		
		cout << "Informe o valor " << (i+1) << " para o vetor A: ";
		cin >> veta[i];
		
	}
	
	system("cls");
	
	for (int i = 0; i <= 9; i++){
		
		cout << "Informe o valor " << (i+1) << " para o vetor B: ";
		cin >> vetb[i];
		
	}
	
	system("cls");
	
	for (int i = 0; i <= 9; i++){
		
		vetc[i] = veta[i] - vetb[i];
		cout << "O valor " << (i+1) << " do vetor C e: " << vetc[i] << "\n";
		
	}
	

	cout << "\n \n";
	system("pause");
}
