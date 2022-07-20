#include <iostream>
using namespace std;


struct Funcionarios {
	
	string nome;
	int idade;
	char sexo;
	string cpf;
	string data_nascimento;
	int codigo;
	string cargo;
	float salario;	
	
};


int main(int argc, char** argv) {	
	
	int n, cont = 0;
	
		
	cout << "Informe quantos funcionarios deseja registrar: ";
	cin >> n;
	
	Funcionarios funcionario[n];
	
	system("cls");
	
	
	for(int i = 0; i < n; i++) {
		
		cont++;
		
		cout << "Registro de dados - Funcionários - Registro 00 \n \n";
		
		cout << "Informe o nome do funcionário: ";
		cin >> funcionario[i].nome;
		cout << "\n";		
		cout << "Informe a idade do funcionário: ";
		cin >> funcionario[i].idade;
		cout << "\n";
		cout << "Informe o sexo do funcionário (M/F): ";
		cin >> funcionario[i].sexo;		
		cout << "\n";		
		cout << "Informe o CPF do funcionário: ";
		cin >> funcionario[i].cpf;
		cout << "\n";		
		cout << "Informe a data de nascimento do funcionario: ";
		cin >> funcionario[i].data_nascimento;
		cout << "\n";		
		cout << "Informe o Código do Setor onde o funcionario trabalha: ";
		cin >> funcionario[i].codigo;
		cout << "\n";		
		cout << "Informe o cargo do funcionario: ";
		cin >> funcionario[i].cargo;
		cout << "\n";
		cout << "Informe o salario do funcionario: R$";
		cin >> funcionario[i].salario;
				
		system("cls");
		
	}
	
	cont = 0;
	
	for(int x = 0; x < n; x++) {
		
		cont++;
		
		cout << " Dados de funcionario registrados - Registro 00 \n \n";
		
		cout << "Nome: " << funcionario[x].nome << "\n";
		cout << "Idade: " << funcionario[x].idade << "\n";
		cout << "Sexo: " << funcionario[x].sexo << "\n";
		cout << "CPF: " << funcionario[x].cpf << "\n";
		cout << "Data de nascimento: " << funcionario[x].data_nascimento << "\n";
		cout << "Codigo do setor onde trabalha: " << funcionario[x].codigo << "\n";
		cout << "Cargo: " << funcionario[x].cargo << "\n";
		cout << "Salario: R$";
		printf("%.2f", funcionario[x].salario);
		cout << "\n \n";
		
	}
	
	
	
	cout << "\n \n";
	system("pause");
	
}
