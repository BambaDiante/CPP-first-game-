#include "duree.hpp"
#include <iostream>
using namespace std;
duree::duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}
bool duree::estEgal(duree const& b) const
//ici je compare l'objet courant a b et je met const pour que la methode na change pas la valeur de l'attribut
//exemple d1.estEagl(d2) je compare l'objetc courant d1 a d2
{
    //Teste si a.m_heure == b.m_heure etc.  
    if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes)
        return true;
    else
        return false;
}
bool operator==(duree const& a, duree const& b)
{
    return a.estEgal(b);
}
bool operator!=(duree const& a, duree const& b)
{
    if(a==b){
        return false;
    }
    else{
        return true;
    }
}

int duree::decomposition() const
{
    return m_heures * 3600 + m_minutes * 60 + m_secondes;
}
bool duree::superieur(duree const& b) const{
    if(decomposition()<b.decomposition()){
        return false;
    }
    else{
        return true;
    }
}
bool duree::inferieur(duree const& b) const{
    if(decomposition()<b.decomposition()){
        return true;
    }
    else{
        return false;
    }
}
bool operator>(duree const& a, duree const& b)
{
    return a.superieur(b);
}
bool operator<(duree const& a, duree const& b)
{
    return a.inferieur(b);
}
void duree::afficher() const{
    cout<<"Heures: "<< m_heures<< endl;
    cout<<"Minutes: "<< m_minutes<< endl;
    cout<<"Secondes: "<< m_secondes<< endl;
}
duree duree::additionner(duree const& b) const{
    return duree (m_heures+b.m_heures,m_minutes+b.m_minutes,m_secondes+b.m_secondes);
}
duree operator+(duree const& a,duree const& b){
    return a.additionner(b);
}
duree duree::soustraire(duree const& b) const{
    return duree (m_heures-b.m_heures,m_minutes-b.m_minutes,m_secondes-b.m_secondes);
}
duree operator-(duree const& a,duree const& b){
    return a.soustraire(b);
}



