#ifndef DEF_GUERRIER

#include <iostream>
#include "Personnage.hpp"
#include <string>

// ceci est un heritage de la classe Personnage
class Guerrier : public Personnage{
    public:
       void frapperAvecunMarteau()const;
};

#endif
