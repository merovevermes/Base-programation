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
#include "TP6/TP6.hpp"
#include "Structure.hpp"




    
int main() {
//Invoquer les fonction ici//
    
//partie TP5

        //    date date_utilisateur_1,date_utilisateur_2,date_utilisateur_3;
        //    bool egaux=false;
        //    int Nmax,taille;
        //    std::cout<<"veuillez saisir la taille du tableaux : ";
        //    std::cin>>Nmax;
        //    std::cout<<"veuillez saisir le nombre de dates (si le nombre de date depasse la taille du tableaux taille max ->taille): ";
        //    std::cin>>taille;
        //    if (taille>Nmax) {
        //        taille=Nmax;
        //    }
        //    std::cout<<"veuillez saisir une date";
        //    std::cin>>date_utilisateur_3.jour>>date_utilisateur_3.mois>>date_utilisateur_3.année;
        //
        //    date tableaux_date[Nmax];
        //    TP5 TP5;
        //    TP5.creation_tableaux(Nmax,taille,tableaux_date);
        //    TP5.afficher(tableaux_date, taille);
        //    TP5.appartient(tableaux_date,taille,date_utilisateur_3);

    
    
//partie TP6

    int nombre_utilisateur,exercice;
    bool test_premier;
    std::cout<<"veuillez saisir un numero d'exercice";
    std::cin>>exercice;
    TP6 TP6;
    if (exercice==1) {
        {std::cout<<"veuillez saisir un nombre"<<std::endl;
        std::cin>>nombre_utilisateur;
        test_premier=TP6.est_premier(nombre_utilisateur);
        if (test_premier==1) {
            std::cout<<"le nombre est premier"<<std::endl;
        }
        else
            std::cout<<"le nombre n'est pas premier"<<std::endl;
        return 0;}
    }
    if (exercice==2) {
        int start_nombre_premier, end_nombre_premier;
        int test = 0;
        std::cout<<"veuillez saisir un nombre de depart : "<<std::endl;
        std::cin>>start_nombre_premier;
        std::cout<<"veuillez saisir un nombre de fin : "<<std::endl;
        std::cin>>end_nombre_premier;
        TP6.nombre_premier(start_nombre_premier, end_nombre_premier,test);
        
        
    }
    if (exercice==3) {
        equation_second_degre valeur_utilisateur;
        std::cout<<"veuillez saisir les valeur de a,b,c : "<<"\n";
        std::cin>>valeur_utilisateur.a; std::cout<<"\n";
        std::cin>>valeur_utilisateur.b; std::cout<<"\n";
        std::cin>>valeur_utilisateur.c; std::cout<<"\n";
        
        TP6.equation_solve_print(valeur_utilisateur);
    } else {
        std::cout<<"Cette exercice n'existe pas..."<<"\n";
    }
}
            
