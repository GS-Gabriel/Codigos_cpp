#include <iostream>
#include <locale>
using namespace std;

int main(int argc, char** argv) {

	int numero[10], i, maior,lmaior;
	
	maior=0;
	lmaior=0;
	
	for (i=0;i<10;i++) {
		
		cout <<"Digite um valor ";
		cin>>numero[i];	
			
	}
	
	for (i=0;i<10;i++) {
		
		if (numero[i]>maior) {
			
			maior = numero[i];
			lmaior=i+1;
			
		}	
	}
	
	system("cls");
	
	for (i=0;i<10;i++) {
		
	cout <<"\n"<<numero[i];
		
	}
	
	cout<<"\n\nMaior numero: " << maior << "\nPosicao: " << lmaior;
	
	cout << "\n \n";
	system("pause");
}
