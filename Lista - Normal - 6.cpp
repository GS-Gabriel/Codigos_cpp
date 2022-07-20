#include <iostream>
using namespace std;

int main (int argc, char** argv){
	
	int num, soma, impar;
	int vetp[6];
	int veti[6];
	
	impar = 0;
	
	for(int i = 0; i <= 5; i++ ){
		
		cout << "Digite um numero: ";
		cin >> num;
		
		if (num % 2 == 0){
			
			vetp[i] = num; 
			soma = soma + num;
			veti[i] = 0;
			
		}else{
			
			veti[i] = num; 
			impar++;
			vetp[i] = 0;
			
		}
		
	}
	
	system("cls");
		
	
		cout << "Numeros Pares: ";
	for(int i = 0; i <= 5; i++ ){ 	
		
		if (vetp[i] != 0){
		cout << vetp[i] << ", ";
		}
		
		
	}
		cout << "a soma dos mesmos foi: " << soma << "\n \n";
	
		cout << "Numeros Impares: ";
	for(int i = 0; i <= 5; i++ ){ 	
		
		if (veti[i] != 0){
		cout << veti[i] << ", ";
		}
		
	}
		cout << "a quantidade de numeros impares foi: " << impar << "\n";
	
	cout << "\n \n";
	system("pause");
}
