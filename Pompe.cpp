
#include "Pompe.hpp"

Pompe::Pompe(int choix)
{
    choisir(choix);
}

void Pompe::choisir(int choix)
{
    _choix = choix;
    switch (choix)
    {
    case 0:
        carburant = Carburant("Diesel", 10, 2.1);
        break;

    default:
        carburant = Carburant("Sans Plomb 95", 10, 1.8);
    }

    afficheur = Afficheur(carburant.getPrix());
}

void Pompe::servir()
{
    carburant.decremente();
    afficheur.incremente();
}

void Pompe::facturer()
{
    afficheur.affiche();
}