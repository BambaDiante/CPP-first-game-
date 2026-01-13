#ifndef DEF_ARME

#define DEF_ARME

#include <iostream>
#include <string>
class Personnage;
class Arme{
    public:

    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
    void attaquer(Personnage &cible,int degats);
    
    private:
    
    std::string m_nom;
    int m_degats;

};
#endif