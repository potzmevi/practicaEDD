#include "Carreta.h"
#include <iostream>
using namespace std;

Carreta::Carreta(int numeroCarreta)
{
    this->numeroCarreta = numeroCarreta;
}

int Carreta::getNumeroCarreta()
{
    return numeroCarreta;
}