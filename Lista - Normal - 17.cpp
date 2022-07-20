#include <iostream>
#include <locale>
using namespace std;

int main(int argc, char** argv) {

	int numero[3], i, maior,lmaior, menor,lmenor;
	
	maior=0;
	lmaior=0;
	
	for (i=0;i<3;i++) {
		
		cout <<"Digite um valor ";
		cin>>numero[i];	
			
	}
	
	for (i=0;i<3;i++) {
		
		if (numero[i]>maior) {
			
			maior = numero[i];
			lmaior=i+1;
			
		}	
	}
	
	system("cls");
	
	for (i=0;i<3;i++) {
		
		if (numero[i]<menor) {
			
			menor = numero[i];
			lmenor=i+1;
			
		}	
	}
	
	for (i=0;i<3;i++) {
		
	cout <<"\n"<<numero[i];
		
	}
	
	cout<<"\nMaior numero: " << maior << "\nPosicao: " << lmaior;
	cout<<"\nMenor numero: " << menor << "\nPosicao: " << lmenor;
	cout<<"\n";
	
	system("pause");
}
