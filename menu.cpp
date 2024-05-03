#include "menu.hpp"
#include <iostream>

using namespace std;


void afficherMenu()
{
	cout << endl << "Jeu du juste prix" << endl;
	cout << static_cast<char>(ChoixMenu::JOUER) << ": Jouer" << endl;
	cout << static_cast<char>(ChoixMenu::AFFICHER_SCORE) << ": Afficher mon score" << endl;
	cout << static_cast<char>(ChoixMenu::QUITTER) << " : Quitter" << endl;
}


ChoixMenu demanderChoixMenu()
{
	char saisieChoix;
	cin >> saisieChoix;

	if (static_cast<char>(ChoixMenu::JOUER) == saisieChoix || static_cast<char>(ChoixMenu::QUITTER) == saisieChoix || static_cast<char>(ChoixMenu::AFFICHER_SCORE) == saisieChoix)
	{
		return static_cast<ChoixMenu>(saisieChoix);
	}
	else
	{
		return ChoixMenu::INCORRECT;
	}
}