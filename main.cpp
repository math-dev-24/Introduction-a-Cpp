#include <iostream>
#include <array>
#include <random>

#include "constantes.hpp"
#include "jeu.hpp"
#include "menu.hpp"

using namespace std;


int main()
{
	bool continuer(true);
	TableauDeScore scores{0, 0, 0};
	int indiceCourant{ 0 };
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> dis(BORNE_MIN, BORNE_MAX);
	

	while (continuer) {

		afficherMenu();

		auto choix = demanderChoixMenu();
		int randomnumber = dis(gen);

		switch (choix)
		{
		case ChoixMenu::JOUER:
			scores[indiceCourant] = jouerPartie(randomnumber);
			indiceCourant = (indiceCourant + 1) % NOMBRE_SCORE;
			break;
		case ChoixMenu::AFFICHER_SCORE:
			afficherScore(scores);
			break;
		case ChoixMenu::QUITTER:
			cout << "Au revoir !" << endl;
			continuer = false;
			break;
		case ChoixMenu::INCORRECT:
		default:
			return EXIT_FAILURE;
		}
	}
	return EXIT_SUCCESS;
}



