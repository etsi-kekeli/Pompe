#pragma once

#include <iostream>
using namespace std;

class Carburant
{
private:
    string _type;
    double _quantite;
    double _prix;

public:
    Carburant(string type = "Diesel", double quantite = 10, double prix = 2.1);
    // ~Carburant();
    double getQuantite();
    string getType();
    double getPrix();
    void decremente();
    // void incremente();
};
