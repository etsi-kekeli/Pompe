#include "Carburant.hpp"

Carburant::Carburant(string type, double quantite, double prix) : _type(type), _quantite(quantite), _prix(prix)
{
}

// Carburant::~Carburant()
// {
// }

double Carburant::getQuantite()
{
    return _quantite;
}
string Carburant::getType()
{
    return _type;
}
double Carburant::getPrix()
{
    return _prix;
}
void Carburant::decremente()
{
    _quantite = (_quantite > 0.1) ? _quantite - 0.1 : 0;
}

// void Carburant::incremente()
// {
//     _quantite += 0.1;
// }