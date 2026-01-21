#include <iostream>
#include "duree.hpp"
#include "duree.cpp"
using namespace std;

int main()
{
    duree duree1(0, 10, 28), duree2(0, 15, 2);
    cout <<"La premiere duree est" <<endl;
    duree1.afficher();
    cout <<"La deuxxieme duree est" <<endl;
    duree2.afficher();
    if(duree1 == duree2){
        cout <<"Les durees sont identiques"<<endl;
        
    }
    else if(duree1 != duree2){
        cout <<"Les durees ne sont pas identiques"<<endl;
    }
    if(duree1 > duree2){
        cout <<"La premiere duree est superieure a la deuxieme"<<endl;
    }
    else if(duree1 < duree2){
        cout <<"La premiere duree est inferieure a la deuxieme"<<endl;
    }
    cout <<"La somme de vos duree est : ";
    
    duree d3;
    d3=duree1+duree2;
    d3.afficher();
    cout <<endl<<"La difference de vos duree est : ";
    duree d4;
    d4=duree1-duree2;
    d4.afficher();
 
    return 0;
}
