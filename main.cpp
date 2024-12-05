#include "Pompe.hpp"
#include <iostream>
using namespace std;

int main()
{
    Pompe *superPompe = new Pompe();
    superPompe->choisir(0);

    for (int i = 0; i < 95; i++)
    {
        superPompe->servir();
    }

    superPompe->facturer();

    delete superPompe;
    return 0;
}
