#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int a[5][5], somaL[5], somaC[5], lin, col, soma;
    
    for(lin = 0; lin < 5; lin++){
    	
    	for(col = 0; col < 5; col++){
    		
    		cout << "Informe o valor da posicao (" << lin << "," << col << "): ";
    		cin >> a[lin][col];
		}
	}
	
	system("cls");
	
	for(lin = 0; lin < 5; lin++){
    	
    	for(col = 0; col < 5; col++){
    		
    		cout << a[lin][col] << " ";
		}
		
		cout << endl;
	}
	
	cout << endl; 
    
    for(lin = 0; lin < 5; lin++){
    	
		for(col = 0; col < 5; col++){
			
			soma += a[lin][col];
		}
    	
    	somaL[lin] = soma;
    	soma = 0;
	}
	
	for(col = 0; col < 5; col++){
    	
		for(lin = 0; lin < 5; lin++){
			
			soma += a[lin][col];
		}
    	
    	somaC[col] = soma;
    	soma = 0;
	}
	
	for(int i = 0; i < 5; i++){
		
		cout << "\nSoma da linha " << i <<": " << somaL[i];
	}
	
	cout << endl;
	
	for(int i = 0; i < 5; i++){
		
		cout << "\nSoma da coluna " << i <<": " << somaC[i];
	}
    
    cout << endl;
    system("pause");
}
