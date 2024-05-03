#include "jeu.hpp"
#include "constantes.hpp"

#include <iostream>
#include <chrono>

using namespace std;

void demanderProposition(int& proposition) {
	cout << endl << "Propose un nombre : ";
	cin >> proposition;
}


int jouerPartie(int leJustePrix)
{
	int proposition{ 0 };
	int tentative{ 0 };

	using Duree = std::chrono::duration<double>;
	Duree duree{ 0s };

	auto debutPartie = std::chrono::system_clock::now();

	cout << duree.count() << endl;

	while (proposition != leJustePrix) {
		tentative++;
		demanderProposition(proposition);
		if (proposition < BORNE_MIN || proposition > BORNE_MAX) break;
		if (proposition != leJustePrix)
		{
			if (proposition > leJustePrix)
			{
				cout << "C'est moins";
			}
			else
			{
				cout << "C'est plus";
			}
		}
		else
		{
			auto finPartie = std::chrono::system_clock::now();
			duree = finPartie - debutPartie;
			cout << "Partie terminée ! En " << tentative << "! en " << duree.count() << endl;
		}
	}
	return tentative;
}


void afficherScore(TableauDeScore& scores) {
	cout << "Dernière(s) partie(s) :" << endl;
	for (int score : scores) {
		if (score != 0) {
			cout << "Tentative : " << score << endl;
		}
		else {
			cout << "-" << endl;
		}
	}
}