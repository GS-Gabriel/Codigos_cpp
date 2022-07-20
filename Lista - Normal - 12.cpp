#include <iostream>
using namespace std;

struct Usuarios {

	string nome;
	string bairro;
	string rua;
	int idade;
	int casa;	
};
	int main(int argc, char** argv) {
	
	int n = 1;
	Usuarios usuario[n];
	for ( int i = 0 ; i < n; i++) {
	
	cout << "Dados do Usuario " << "\n\n";	
	cout << "Informe seu nome : ";	
		cin >> usuario[i].nome;
	cout << "Informe seu bairro : ";	
		cin >> usuario[i].bairro;
	cout << "Informe sua rua : ";	
		cin >> usuario[i].rua;
	cout << "Informe o numero da sua casa : ";	
		cin >> usuario[i].casa;		
	cout << "Informe sua idade : ";	
		cin >> usuario[i].idade;

}
		system("cls");
	for ( int x = 0 ; x < n; x++) {

	cout << "Dados do Usuario " << "\n\n";
	cout << "Nome: " << usuario[x].nome << "\n";
	cout << "Bairro: " << usuario[x].bairro << "\n";
	cout << "Rua: " << usuario[x].rua << "\n";
	cout << "Numero: " << usuario[x].casa << "\n";
	cout << "Idade: " << usuario[x].idade << "\n";
	
	}		
	system("pause");
}
