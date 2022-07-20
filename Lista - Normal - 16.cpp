#include <iostream>
using namespace std;

struct dados{
	string nome;
	string endereco; 
	string telefone;	
};

int main (int argc, char** argv){
	
	dados dados;
	string n[5];
	string a[5];
	string e[5];
	string b[5];
	string t[5];
	string c[5];
	int w;
	
	w = 0;
	
	for(int i = 0; i <= 4; i++){
		
		cout << "Informe os dados pessoais: \n";
		cout << "Informe o nome: ";
		cin >> dados.nome;
		n[i] = dados.nome;
		cout << "Informe o endereco: ";
		cin >> dados.endereco;
		e[i] = dados.endereco;
		cout << "Informe o telefone: ";
		cin >> dados.telefone;
		t[i] = dados.telefone;
		system("cls");
		
	}
	
	for(int x = 0; x <= 4; x++){
		for(int z = 0; z <= 4; z++){
		
			if(x != z){
				if(n[x] > n[z]) {
	
				w = w + 1;
			
			}
			
			}
			
		}
		
		a[w] = n[x];
		b[w] = e[x];
		c[w] = t[x];
		
		w = 0;
				
	}
	
	system("cls");
	
	for (int i = 0; i <= 4; i++){
		
		cout << "Nome: " << a[i] << "\n";
		cout << "Endereco: " << b[i] << "\n";
		cout << "Telefone: " << c[i] << "\n";
		cout << endl;
		
	}
	
			
	cout  <<  "\n \n";
	system("pause");
}
