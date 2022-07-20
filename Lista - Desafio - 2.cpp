#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    clock_t reflex_time;
    int random_time = (rand() % 10) + 5;
    Sleep(random_time*1000);

    system("cls");
    cout << "Agora!" << endl << "Digite o numero " << ((rand() % 89) + 10) << endl;

    reflex_time = clock();

    cin >> random_time;

    reflex_time = clock() - reflex_time;

    cout << "Seu tempo de reflexo foi de " << ((double)reflex_time)/((CLOCKS_PER_SEC)) << "s" << endl;

    return 0;
}