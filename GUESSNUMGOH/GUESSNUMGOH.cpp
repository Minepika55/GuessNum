#include <iostream>
#include <cstdlib> // Aquestes variables son per el rand.
#include <ctime> // Aquestes variables son per el rand.
using namespace std;

int main() {
	int intents = 0; // Aquest int es per calcular el nombre d'intents.
	int num; int prova; // Aquests ints son per el numero que tria la maquina i per el numero que tria el jugador.
	srand(time(0)); // Inicialitzo la llavor del rand.
	num = rand() % 100 + 1; // Li dona a num un valor aleatori entre 1 i 100.
	do {
		cout << "**** Introdueix un numero entre 1 i 100 a veure si l'endevines ****" << endl; //Faig una introcducció.
		cin >> prova; //Guardem la resposta del jugador.
		intents++; //Sumem 1 a els intents totals.
		if (prova > num) { //Avisem al jugador que s'ha passat si posa un numero massa alt.
			cout << "**** T'has passat!!! ****" << endl;
		}
		else if (prova < num) { //Avisem al jugador que s'ha passat si posa un numero massa baix.
			cout << "**** Massa baix!!! ****" << endl;
		}
		else { //Mostrem al jugador que ha guanyat si el seu numero es igual al de la maquina.
			cout << "**** Enhorabona has encertat el numero en " << intents << " intents!***" << endl;
		}
	} while (prova != num); // Tot aixo si el numero de la maquina no es igual a el numero que hagui triat el jugador.
	return 0; //Donem codi zero per dir que tot el codi ha sortit be i es pot acabar.
}