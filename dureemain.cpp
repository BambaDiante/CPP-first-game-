#include <iostream>
#include "duree.hpp"
#include "duree.cpp"
using namespace std;

int main()
{
    duree duree1(0, 10, 28), duree2(0, 15, 2);
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
 
    return 0;
}
