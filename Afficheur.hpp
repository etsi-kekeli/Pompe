#pragma once

class Afficheur
{
private:
    double _litre;
    double _prix_litre;
    double _somme;

public:
    Afficheur(double prix_litre = 2.1);
    // ~Afficheur();

    void incremente();
    void decremente();
    void affiche();
};
