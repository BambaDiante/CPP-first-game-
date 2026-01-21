#ifndef DEF_DUREE
#define DEF_DUREE

class duree
{
public:
    duree(int heures = 0, int minutes = 0, int secondes = 0);

    void afficher() const;
    bool estEgal(duree const& b) const;
    bool superieur(duree const& b) const;
    bool inferieur(duree const& b) const;
    duree additionner(duree const& b) const;
    duree soustraire(duree const& b) const;

private:
    int decomposition() const;
    
    int soustraire(duree const& a,duree const& b);

    int m_heures;
    int m_minutes;
    int m_secondes;
};
bool operator == (duree const& a, duree const& b);
bool operator != (duree const& a, duree const& b);
bool operator > (duree const& a, duree const& b);
bool operator <(duree const& a, duree const& b);
duree operator +(duree const& a, duree const& b);
duree operator -(duree const& a, duree const& b);
//il est necessaire de l'inclure pour les operations de comparaison 
//ici l'operation de comparaisont est l'egalite
// je passe en reference constante pour ne pas recopier mes variables 
// mais egalement pour ne pas les changer
//il doit etre situee a l'exterieur de toute classe


 
#endif
