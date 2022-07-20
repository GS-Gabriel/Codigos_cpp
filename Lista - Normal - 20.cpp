#include <iostream>
using namespace std;

int op(float x, float y, float z){
	
	return (x * x) + y + z;
	
}

int main(int argc, char** argv) {
    
    float n1, n2, n3;
    
    cout << "Informe o primeiro valor: ";
    cin >> n1;
    
    cout << "Informe o segundo valor: ";
    cin >> n2;
    
    cout << "Informe o terceiro valor: ";
    cin >> n3;
    
    cout << op(n1, n2, n3);
    

    cout << endl;
    system("pause");
}
