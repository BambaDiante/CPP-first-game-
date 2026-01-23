#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN
#include "Personnage.hpp"

class Magicien: public Personnage{

    public:
       Magicien();
       void seblesser(int vie);
       void ensorceler(Magicien &cible);
       void afficher();
    
    
    private:
       // Pas d'attribut vie ici : la vie/mana sont gérés par la classe de base Personnage (m_vie, m_mana)
       // Si le magicien a des attributs propres, les ajouter ici.

};

#endif