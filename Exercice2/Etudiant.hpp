#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>
#include "Universite.hpp"
using namespace std;

class Etudiant {
private:
    string nom;
    int age;
    Universite* universite;

    static int nbEtudiants;

public:
    Etudiant(string n, int a, Universite* u);

    void afficher() const;

    static void afficherTotal();
};

#endif
