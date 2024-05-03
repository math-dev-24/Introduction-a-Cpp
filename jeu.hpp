#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED

#include <array>
#include "constantes.hpp"

using TableauDeScore = std::array<int, NOMBRE_SCORE>;


void demanderProposition(int& proposition);
int jouerPartie(int leJustePrix);
void afficherScore(TableauDeScore& scores);

#endif