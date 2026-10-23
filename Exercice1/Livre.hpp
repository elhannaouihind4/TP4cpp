#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>

class Livre {
private:
    std::string titre;
    std::string auteur;
    int annee;

    static int nbLivres;

public:
    Livre(std::string t, std::string a, int an);

    void afficher() const;

    static void afficherTotal();
};

#endif
