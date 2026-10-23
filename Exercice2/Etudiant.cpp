#include <iostream>
#include "Etudiant.hpp"

int Etudiant::nbEtudiants = 0;

Etudiant::Etudiant(string n, int a, Universite* u)
    : nom(n), age(a), universite(u) {
    nbEtudiants++;
}

void Etudiant::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "Age : " << age << endl;

    cout << "Universite : ";

    if (universite != nullptr) {
        universite->afficherNom();
    } else {
        cout << "Aucune universite associee" << endl;
    }


}

void Etudiant::afficherTotal() {
    cout << "Nombre total d'etudiants crees : "
         << nbEtudiants << endl;
}




