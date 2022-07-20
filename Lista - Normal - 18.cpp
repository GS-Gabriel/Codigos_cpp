#include <iostream>
#include <cmath>
using namespace std;

void calc(){
	
	int valor;
	
	cout << "Digite um valor para saber se par ou impar: ";
	cin >> valor ;
	
	if(valor % 2 == 0){
		
		cout << "1";
		
	}
	
	else{
		
		valor % 1 == 0;
		cout << "0";
	}
	
	
}



int main(){
	
		calc();
		
	cout << endl;	
	system("pause");
}
