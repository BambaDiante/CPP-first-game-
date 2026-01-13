#include <iostream>
#include "Personnage.hpp" 
#include "Personnage.cpp"
using namespace std;

int main()
{
    
    // Personnage david, goliath;//c'est ici que les constructeur de david et de goliath sont appellees
    //Création de 2 objets de type Personnage : david et goliath
    Personnage david, goliath("Epee aiguisee", 20);//ici goliath a des le depart une epee aiguise
    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath attaque david
    david.attaquer(goliath); //david contre-attaque... 
    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);
    cout << "Etat de david : " << endl;
    david.afficherEtat();
    cout << "Etat de goliath : " << endl;
    goliath.afficherEtat();


    return 0;
}