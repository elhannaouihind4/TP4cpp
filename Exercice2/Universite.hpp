#ifndef UNIVERSITE_HPP
#define UNIVERSITE_HPP

#include <string>
using namespace std;

class Universite {
private:
    string nom;

public:
    Universite(string n);

    void afficherNom() const;
};

#endif
