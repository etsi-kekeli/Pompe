#include "Afficheur.hpp"

#include <iostream>
using namespace std;

Afficheur::Afficheur(double prix_litre) : _prix_litre(prix_litre), _litre(0), _somme(0)
{
}

// Afficheur::~Afficheur()
// {
// }

void Afficheur::incremente()
{
    _litre += 0.1;
}

void Afficheur::decremente()
{
    _litre = (_litre < 0.1) ? 0 : _litre + 0.1;
}

void Afficheur::affiche()
{
    _somme = _litre * _prix_litre;
    cout << _litre << " Litre(s)" << endl
         << _prix_litre << " euros" << endl
         << "Total : " << _somme << " euros" << endl;
}
