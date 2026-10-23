#include <iostream>
#include "Universite.hpp"

Universite::Universite(string n) : nom(n) {
}

void Universite::afficherNom() const {
    cout << nom << endl;
}




