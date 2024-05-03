#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

enum class ChoixMenu
{
	JOUER = 'j',
	AFFICHER_SCORE = 'c',
	QUITTER = 'q',
	INCORRECT = 'I'
};


void afficherMenu();
ChoixMenu demanderChoixMenu();


#endif