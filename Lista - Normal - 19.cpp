#include <iostream>
using namespace std;

int v;

int main(int argc, char** argv) {
	
	cout <<"Digite um valor ";
	cin>>v;
	
	if (v<0) {
	
		cout<< "O valor e correspondente a "<< false;
	
	} else {
		
		cout<< "O valor e correspondente a "<< true;
		
	}
	
	cout << endl;
	system("pause");
}
