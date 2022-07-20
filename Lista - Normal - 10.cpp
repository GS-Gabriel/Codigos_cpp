#include <iostream>
using namespace std;

int C[3][3];
	
	
void matrizb(){
	
	int matrizab[3][3];
	
	cout <<"Matriz B \n \n";
	
	for (int l1 = 0; l1 < 3; l1++ ){
		for (int c1 = 0; c1 < 3 ; c1++){
			
			cout<< "Digite um numero: ";
			cin >> matrizab [l1][c1];
			
			C[l1][c1] = C[l1][c1] * matrizab[l1][c1];
							
		}
	}
	
	system("cls");
	
	
	cout << "Matriz B \n \n";	
	
	for (int l1 = 0; l1 < 3; l1++ ){
		for (int c1 = 0; c1 < 3 ; c1++){
			
			cout << matrizab [l1][c1] << " ";
					
		}
		
		cout << "\n";
		
	}
	
	system("pause");
}


void matriza(){
	
	int matriza[3][3];
	
	cout << "Matriz A \n \n";
	
	for (int l = 0; l < 3; l++ ){
		for (int c = 0; c < 3 ; c++){
			
			cout<< "Digite um numero: ";
			cin >> matriza [l][c];
			
			C[l][c] = matriza[l][c];
					
		}
	}
	
	system("cls");
	
	cout << "Matriz A  \n \n";
		
	for (int l = 0; l < 3; l++ ){
		for (int c = 0; c < 3 ; c++){
			
			cout << matriza [l][c] << " ";	
				
		}
		
		cout << "\n";
		
	}
	
	system("pause");
	system("cls");
}


void matrizc() {
	
	cout << "Matriz C (A * B) \n \n";
	
	for(int linha = 0; linha < 3; linha++) {
		for(int coluna = 0; coluna < 3; coluna++) {
			
			cout << C[linha][coluna] << " ";
			
		}
		
		cout << "\n";		
 		
	}
	
}


int main(int argc, char** argv) {

	matriza();
	matrizb();
	
	system("cls");
	
	matrizc();
	
	
	
	cout << endl;
	system("pause");

}
