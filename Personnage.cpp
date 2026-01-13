#include "Personnage.hpp"
#include <iostream>
using namespace std;
Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("Epee rouillee"), m_degatsArme(10)
{
    //Rien à mettre dans le corps du constructeur, tout a déjà été fait !
}
//on peut aussi initialiser les attributs de la classe de la methode suivante 
//c'est ce qu'on appelle une liste d'initialisation
Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100),m_nomArme(nomArme), m_degatsArme(degatsArme)
{
 
}


void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage

    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
    //On inflige à la cible les dégâts que cause notre arme
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100) //Interdiction de dépasser 100 de vie
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant()
{
    return m_vie > 0;
}
void Personnage::afficherEtat(){
    cout <<"Niveau de vie: "<< m_vie << endl;
    cout <<"Niveau de magie:"<< m_mana <<endl;

}
//on utilise un contructeur pour initialiser les valeurs des attributs
//un construteur est une methode qui n'a pas de valeur de retour et qui le meme non que la classe
// Personnage::Personnage()
// {
//     m_vie = 100;
//     m_mana = 100;
//     m_nomArme = "Epee rouillee";
//     m_degatsArme = 10;
// }