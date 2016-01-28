//------------------------------------------------------------
//
// oving1main.cpp
//ø =  
//å = †
//æ = ‘
//
#include <iostream>
using namespace std;
int main() {

	int antKM;
	int tid;
	int resultat;

	cout << "Skriv f›rst strekning, s† antall timer kjørt med mellomrom: ";
	cin >> antKM >> tid;
	resultat = antKM / tid;
	cout << "Resultatet blir en gjennomsnittsfart p†: " << resultat << " kilometer i timen." << endl;

	// setter console på pause
	cin.get();
	cin.get();

} // main
