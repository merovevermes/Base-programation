//
//  main.cpp
//  TP1 Base programation
//
//  Created by Mérové on 22/09/2021.
//

#include <iostream>
#include "TP1.hpp"
#include "TP2.hpp"
#include "TP3/TP3.hpp"
#include "TP4/TP4.hpp"
#include "TP5/TP5.hpp"
#include "Structure.hpp"




    
int main() {
//Invoquer les fonction ici//
    date date_utilisateur_1,date_utilisateur_2;
    bool egaux=false;
    int Nmax,taille;
    std::cout<<"veuillez saisir la taille du tableaux : ";
    std::cin>>Nmax;
    std::cout<<"veuillez saisir le nombre de dates (si le nombre de date depasse la taille du tableaux taille max ->taille): ";
    std::cin>>taille;
    if (taille>Nmax) {
        taille=Nmax;
    }
    date tableaux_date[Nmax];
    TP5 TP5;
    TP5.creation_tableaux(Nmax,taille,tableaux_date);
    TP5.afficher(tableaux_date, taille);

    return 0;
}
    
