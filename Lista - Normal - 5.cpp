#include <iostream>
#include <cmath>
using namespace std;


void menor(int x, string y, double z) {
	
	cout << "Aluno mais baixo \n \n";
	cout << "Numero: " << x << "\n";
	cout << "Nome: " << y << "\n";
	cout << "Altura: ";
	printf("%.2f", z);
	cout << " m" << "\n \n \n";
	
}


void maior(int x, string y, double z) {
	
	cout << "Aluno mais alto  \n \n";
	cout << "Numero: " << x << "\n";
	cout << "Nome: " << y << "\n";
	cout << "Altura: ";
	printf("%.2f", z);
	cout << " m" << "\n \n";
	
}



int main(int argc, char** argv) {
	
	int num[10];
	int num_maior, num_menor;
	
	string nome[10];
	string nome_maior, nome_menor;
	
	double altura[10];
	double alt_maior, alt_menor;
	
	
	alt_maior = 0;
	alt_menor = 0;	
		
	
	for(int x = 0; x < 10; x++) {
		
		
		cout << "Informe o numero do aluno: ";
		cin >> num[x];
		cout << "Informe o nome do aluno: ";
		cin >> nome[x];
		cout << "Informe a altura do aluno: ";
		cin >> altura[x];
		
		
		if (alt_menor == 0) {
			
			alt_menor = altura[x];
			
		} else if (altura[x] < alt_menor) {
			
			alt_menor = altura[x];
			num_menor = num[x];
			nome_menor = nome[x];
			
		}
		
		
		if (altura[x] > alt_maior) {
			
			alt_maior = altura[x];
			num_maior = num[x];
			nome_maior = nome[x];
			
		}
		
		system("cls");
				
	}
	
	
	menor(num_menor, nome_menor, alt_menor);
	
	maior(num_maior, nome_maior, alt_maior);	
	
	
	

	cout << "\n \n";   
	system("pause");
	
}
