#include <iostream>
#include <string.h>
using namespace std;

int vogal(string x){
	
	if(x == "a" or x == "e" or x == "i" or x == "o" or x == "u" or x == "A" or x == "E" or x == "I" or x == "O" or x == "U"){
		
		return (1); 
		
	}
	
	if(x == " "){
		
		return (2);
		
	}
	
	
	
}



int main(int argc, char** argv) {
	
	string nome, nome1;
	
	for(int i = 0; i < 2; i++){
		
		cout << "Informe um nome: " << endl;
		getline(cin,nome);
		
		
		for(int x = 0; x < nome.length(); x++){
		
		nome1 = nome[x];
		if (vogal(nome1) == 1){
			
			cout << nome[x] << " e uma vogal. \n";
			
		} else if(vogal(nome1) == 2){
			
			cout << "    \n";
			
		}else {
			
			cout << nome[x] << " e uma consoante. \n";
			
		}	
		}
	cout << "\n \n";	
	}
	system("pause");
}
