//
//  TP5.hpp
//  Base-Programation
//
//  Created by Mérové on 22/10/2021.
//

#ifndef TP5_hpp
#define TP5_hpp

#include <stdio.h>
#include "../Structure.h"


class TP5{
public:
    int creation_tableaux(int Nmax,int taille,date tableaux_date[Nmax]);
    int egale(date date_utilisateur_1,date date_utilisateur_2, bool egaux);
    void afficher(date tableaux_date[],int taille);
};
#endif /* TP5_hpp */
