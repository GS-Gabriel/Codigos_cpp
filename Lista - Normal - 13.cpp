#include <iostream>
using namespace std;

struct Usuarios {

	string nome;
	string matricula;
	string curso;	
	
};	
    string vet [5];
	int main(int argc, char** argv) {
	int l;
	int d = 0;
	int n = 1;
	Usuarios usuario[5];
	for ( int i = 0 ; i < n; i++) {
		for (int n = 0; n < 5 ; n++) {
	
	cout << "Dados - Registro.00" << (d = d + 1) << "\n\n";	
	cout << "Informe seu nome : " ; 	
		cin >> usuario[n].nome;
	cout << "Informe sua matricula : ";	
		cin >> usuario[n].matricula;
	cout << "Informe qual seu curso : ";	
		cin >> usuario[n].curso;
}
}
system("cls");
cout << " Registro 1 \n";
cout << "\n Nome: " << usuario[0].nome;
cout << "\n Matriculado: " << usuario[0].matricula;
cout << "\n Curso: " << usuario[0].curso;

cout << " Registro 2 \n";
cout << "\n Nome: " << usuario[1].nome;
cout << "\n Matriculado: " << usuario[1].matricula;
cout << "\n Curso: " << usuario[1].curso;

cout << " Registro 3 \n";
cout << "\n Nome: " << usuario[2].nome;
cout << "\n Matriculado: " << usuario[2].matricula;
cout << "\n Curso: " << usuario[2].curso;

cout << " Registro 4 \n";
cout << "\n Nome: " << usuario[3].nome;
cout << "\n Matriculado: " << usuario[3].matricula;
cout << "\n Curso: " << usuario[3].curso;

cout << " Registro 5 \n";
cout << "\n Nome: " << usuario[4].nome;
cout << "\n Matriculado: " << usuario[4].matricula;
cout << "\n Curso: " << usuario[4].curso;
	
	system("pause");
}
