#include <iostream>

using namespace std;


struct Livros {
	
	string titulo;
	string autor;
	int ano;
	
};


int main(int argc, char** argv) {
	
	Livros livro[5];
	
	int n = 0;
	
	string busca;
	
	
	for(int i = 0; i < 5; i++) {
		
		n++;
		
		cout << "Dados do Livro " << n << "  \n ";
		cout << "Informe o titulo do livro (maximo 30 letras): ";
		cin >> livro[i].titulo;
		cout << "Informe o autor do livro (maximo 15 letras): ";
		cin >> livro[i].autor;
		cout << "Informe o ano do livro: ";
		cin >> livro[i].ano;
				
		system("cls");
		
	}
	
	
	cout << "Busca por titulo \n";
	cout << "Informe titulo do livro para a busca: ";
	cin >> busca;
	cout << "\n \n";
	
	system("cls");

	
	for(int x = 0; x < 5; x++) {
		
		if (busca == livro[x].titulo) {
			
			cout << "Livro " << x + 1 << " \n \n";
			cout << "Titulo: " << livro[x].titulo << "\n";
			cout << "Autor: " << livro[x].autor << "\n";
			cout << "Ano: " << livro[x].ano << "\n \n";
			
		}
		
	}	
	
	cout << "\n \n";
	system("pause");
	
}
