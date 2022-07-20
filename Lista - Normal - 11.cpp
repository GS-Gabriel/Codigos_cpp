#include <iostream>
using namespace std;

struct horario{
	int hora;
	int min; 
	int sec;	
};


struct data {
	int dia; 
	int mes; 
	int ano; 
};


struct compromissos{
	string compromisso; 
};

void h(){
	horario horario1;
	cout << "Digite o horario (hora, min,segundo)\n ";
	cout << "Digite a Hora:";
	cin >> horario1.hora;
	cout << " Digite a minutos:";
	cin >> horario1.min;
	cout << " Digite os segundos:";
	cin >> horario1.sec;
	cout << "\n\n\tHorario registrado! \n\n" ;	
	system ("pause");
}

void d(){
	data data1; 
	cout << "Digite a data \n";
	cout << "Digite o dia: ";
	cin >> data1.dia;
	cout << " Digite o mes: "; 
	cin >> data1.mes;
	cout << " Digite o ano: ";
	cin >> data1.ano; 
	cout << "\n\n\tData registrada ! \n\n";
	system ("pause");
}

void c(){
	compromissos compromissos1;
	cout << "Digite o Compromisso: ";
	cin >> compromissos1.compromisso;
	cout << "\n\tCompromisso registrado! \n";
	 
}

void marcado(){
	horario horario1;
	compromissos compromissos1;
	data data1;
	cout << "\n\tSeu compromisso foi marcado!! \n\n";
	cout << "Data: "<< data1.dia << "/" << data1.mes << "/" << data1.ano ;
	cout << "\nHorario: "<< horario1.hora << ":" << horario1.min << ":" << horario1.sec;
	cout << "\nCompromisso: "<< compromissos1.compromisso; 
	cout << "\n";
	
}



int main(int argc, char** argv) {
	 
	h();
	system("cls");
	d();
	system("cls");
	c(); 
	system("cls"); 
	marcado();

	system("pause");
	}
