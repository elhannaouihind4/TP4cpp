#include "Livre.hpp"

int main() {
    Livre l1("1984", "George Orwell", 1949);

    Livre l2("Le Petit Prince",
             "Antoine de Saint-Exupery", 1943);

    Livre l3("L'Etranger", "Albert Camus", 1942);

    l1.afficher();
    l2.afficher();
    l3.afficher();

    // Appel statique sans creer un objet supplementaire
    Livre::afficherTotal();

    return 0;
}




