#ifndef DEF_PERSONNAGE
//si DEF_PERSONNAGE n'est pas defini on le defini alors ca veut dire que si on inclus le meme code plusieurs fois cela 
//empeche que ca soit declare a chaque instant
#define DEF_PERSONNAGE

#include <string>
// using namespace std;
//on ne l'utilise pas car c'est recommende sur les fichier hpp(entete des fichier c++)
//car ca peut ammener des erreurs
class Personnage
{
    public:
    Personnage();//ceci est un constructeur 
    //un constructeur permet di'initialiser les valeurs des attributs qui ne sont pas des objets
    Personnage(std::string nomArme, int degatsArme);
    //on souhaite creer une utilisateur avec des le depart une meilleure arme que l'arme par defaut 
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);//cible est une reference a un autre joueur qui est egalement un personnage avec les memes champs
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();

    private:
    //selon le principe de l'ancapsulation on met les attributs de la classe en private pour que l'utilisateur ne fasse rien de dangeureux  
    int m_vie;
    int m_mana;
    std::string m_nomArme; //Pas de using namespace std, il faut donc mettre std:: devant string
    int m_degatsArme;
};


#endif