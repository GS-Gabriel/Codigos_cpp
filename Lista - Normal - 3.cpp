#include <iostream>
using namespace std;

struct Usuarios {

	string nome;
	string telefone;
	string email;
	int idade;
	string cpf;	
};

void perguntas(){
	int n1, n2, n3, n4, n5, x, t = 1;
	string y;
	cout << "Questionario \n";
	cout << "Responda com : 1 - SIM | 0 - NAO \n";
		cout << "Telefonou para a vitima? \n";
	cin >> n1;
		cout << "Esteve no local do crime? \n";
	cin >> n2;
		cout << "Mora perto da vitima? \n";
	cin >> n3;
		cout << "Devia para a vitima? \n";
	cin >> n4;
		cout << "Ja trabalhou com a vitima? \n";
	cin >> n5;
	
	if (n1 + n2 + n3 + n4 + n5 == 5) {
			y = "ASSASSINO";
		} else if ((n1 + n2 + n3 + n4 + n5 == 3) || (n1 + n2 + n3 + n4 + n5 == 4)) {
			y = "CUMPLICE";
		} else if (n1 + n2 + n3 + n4 + n5 == 2) {
			y = "SUSPEITO";
		} else{
			y = "INOCENTE";
		}
		
	cout << "\n";
	cout << "O entrevistado e " << y << " !";
	
}
int main(int argc, char** argv) {
	
	int n = 1;
	Usuarios usuario[n];

	int cont = 131;
	for ( int i = 0 ; i < n; i++) {
		cont++;
	
	cout << "Informe os dados do Usuario - Reg.00" << cont << "\n\n";	
	cout << "Digite o nome do Entrevistado: ";	
		cin >> usuario[i].nome;
	cout << "Digite o telefone do Entrevistado: ";	
		cin >> usuario[i].telefone;
	cout << "Digite o e-mail do Entrevistado: ";	
		cin >> usuario[i].email;
	cout << "Digite o idade do Entrevistado: ";	
		cin >> usuario[i].idade;
	cout << "Digite o CPF do Entrevistado: ";	
		cin >> usuario[i].cpf;
	
		system("cls");
	}
	cont = 0;
	for ( int x = 0 ; x < n; x++) {
		cont++;
		
		cout << "Dados do Usuario Reg.00" << cont << "\n\n";
		cout << "Nome: " << usuario[x].nome << "\n";
		cout << "Telefone: " << usuario[x].telefone << "\n";
		cout << "E-mail: " << usuario[x].email << "\n";
		cout << "Idade: " << usuario[x].idade << "\n";
		cout << "CPF: " << usuario[x].cpf << "\n";	
		cout << "\n\n";
	}
	perguntas();		
	
	cout <<  "\n \n";
	system("pause");
}
