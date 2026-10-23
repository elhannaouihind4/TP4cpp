#include "Universite.hpp"
#include "Etudiant.hpp"

int main() {
    Universite u("Universite de Casablanca");

    Etudiant e1("Hind", 20, &u);
    Etudiant e2("Reda", 27, &u);
    Etudiant e3("Youssef", 29, &u);

    e1.afficher();
    e2.afficher();
    e3.afficher();

    Etudiant::afficherTotal();

    return 0;
}



