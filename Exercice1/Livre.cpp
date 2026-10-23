#include <iostream>
#include "Livre.hpp"

// Initialisation de l'attribut statique
int Livre::nbLivres = 0;

// Constructeur
Livre::Livre(std::string t, std::string a, int an)
    : titre(t), auteur(a), annee(an) {

    nbLivres++;
}

// Afficher les informations d'un livre
void Livre::afficher() const {
    std::cout << "Titre : " << titre << std::endl;
    std::cout << "Auteur : " << auteur << std::endl;
    std::cout << "Annee : " << annee << std::endl;

}

// Methode statique
void Livre::afficherTotal() {
    std::cout << "Nombre total de livres : "
              << nbLivres << std::endl;
}




