#include "Magicien.hpp"
#include <iostream>
using namespace std;
Magicien::Magicien():Personnage()
{
    // Personnage::Personnage initialise m_vie et m_mana à 100
    // Le magicien commence avec moins de mana :
    m_mana = 40;
    m_vie = 100;
}
void Magicien::seblesser(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage

    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

void Magicien::ensorceler(Magicien &cible)
{
    cible.seblesser(m_mana);
    //On inflige à la cible les dégâts que cause notre arme
}
void Magicien::afficher(){
    cout <<"Niveau de vie: "<< m_vie << endl ;
    cout <<"Niveau de magie:"<< m_mana <<endl;

}