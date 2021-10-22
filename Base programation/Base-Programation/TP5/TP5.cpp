//
//  TP5.cpp
//  Base-Programation
//
//  Created by Mérové on 22/10/2021.
//

#include "TP5.hpp"
#include <iostream>
#include "../Structure.hpp"
#include <cstdlib>




int TP5::egale(date date_utilisateur_1,date date_utilisateur_2,bool egaux){
    std::cout<<"veuillez saisir deux date a compare "<<std::endl;
    std::cout<<"la premier : ";
    std::cin>>date_utilisateur_1.jour>>date_utilisateur_1.mois>>date_utilisateur_1.année;
    std::cout<<"la deuxième : ";
    std::cin>>date_utilisateur_2.jour>>date_utilisateur_2.mois>>date_utilisateur_2.année;
    if (date_utilisateur_1.jour==date_utilisateur_2.jour && date_utilisateur_1.mois==date_utilisateur_2.mois && date_utilisateur_1.année==date_utilisateur_2.année) {
        egaux=true;
    }
    else
        egaux=false;
    
    return egaux;
}
//fin prog_egale


int TP5::creation_tableaux(int Nmax,int taille, date tableaux_date[Nmax]){
    for (int rang=0;rang<taille;rang++){
        tableaux_date[rang].jour=std::rand()%31+1;
        tableaux_date[rang].mois=std::rand()%12+1;
        tableaux_date[rang].année=std::rand()%3000+1000;
    };
    
    return taille;
}
//fin creation_tableaux

void TP5::afficher(date tableaux_date[],int taille){
    for (int i=0; i<taille; i++) {
        std::cout<<tableaux_date[i].jour<<"/"<<tableaux_date[i].mois<<"/"<<tableaux_date[i].année<<std::endl;
    }
}
