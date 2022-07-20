#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	
	int matriz[5][4];
	int s, mv, mat;
	
	mv = 0;
	
	for (int x = 0; x < 5; x++){
		
			cout << "Informe a matricula do aluno: \n";
			cin >> matriz[x][0];
		
			cout << "Informe a media das notas das provas: \n";
			cin >> matriz[x][1];
		
			cout << "Informe a media das notas dos trabalhos: \n";
			cin >> matriz[x][2];
			
			matriz[x][3] = matriz[x][1] + matriz[x][2];
			
			s = s + matriz[x][3];
			
			if(mv < matriz[x][3]){
				mv = matriz[x][3];
				mat = matriz[x][0];
			} else{
			}
			
			system("cls");
	}
	
	
	cout << "A matricula do aluno com maior nota final e: " << mat << "\n";
	cout << "A media aritmetica das notas finais e: " << (s/5) << "\n";
		
	system("pause");
}
