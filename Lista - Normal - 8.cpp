#include <iostream>
#include <cmath>
using namespace std;

int main (int argc, char** argv){
	int vet[4][4];
	int mv, z, k;
	
	mv = 0;
	
	for (int i = 0; i <=3; i++){
	for (int x = 0; x <=3; x++){
		
		cout << "Informe um valor para a posicao [" << i << "]["<< x << "] da matriz: ";
		cin >> vet[i][x];
		
		if(mv < vet[i][x]){
			mv = vet[i][x];
			z = i;
			k = x;
		}else{
		}
			
	}
	}
	
	cout << "O maior valor da matriz e: " << mv << ", e esta situado na posicao: [" << z << "]["<< k << "]";
	
	

	
	cout << "\n \n";
	system("pause");
}
