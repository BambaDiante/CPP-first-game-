#include "Arme.hpp"
#include "Personnage.hpp"
 
using namespace std;

//ceci est l'arme standard par defaut 
Arme::Arme() : m_nom("Epee rouillee"), m_degats(10)
{
 
}
//si je souhaite remettre au perso une arme cheate 
Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{
 
}
 
void Arme::changer(string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}
void Arme::attaquer(Personnage &cible,int m_degats){
    cible.recevoirDegats(m_degats);
}
 
void Arme::afficher() const
{
    cout << "Arme : " << m_nom << " (Degats : " << m_degats << ")" << endl;
}