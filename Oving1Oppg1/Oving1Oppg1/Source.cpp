//------------------------------------------------------------
//
// oving1main.cpp
//� =  
//� = �
//� = �
//
#include <iostream>
using namespace std;
int main() {

	int antKM;
	int tid;
	int resultat;

	cout << "Skriv f�rst strekning, s� antall timer kj�rt med mellomrom: ";
	cin >> antKM >> tid;
	resultat = antKM / tid;
	cout << "Resultatet blir en gjennomsnittsfart p�: " << resultat << " kilometer i timen." << endl;

	// setter console p� pause
	cin.get();
	cin.get();

} // main
