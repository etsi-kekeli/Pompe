#pragma once
#include "Afficheur.hpp"
#include "Carburant.hpp"

class Pompe
{
private:
    int _choix;
    Carburant carburant;
    Afficheur afficheur;

public:
    Pompe(int choix = 0);
    void choisir(int choix);
    void servir();
    void facturer();
};
