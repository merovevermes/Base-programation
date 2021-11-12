//
//  TP6.cpp
//  Base-Programation
//
//  Created by Mérové on 08/11/2021.
//
#include <vector>
#include "TP6.hpp"
#include <iostream>
#include "Structure.hpp"
#include <cmath>

int TP6::est_premier(int nombre_utilisateur){
    std::vector<int> tableaux_tmp;
    bool est_premier_resultat=0;
    for (int diviseur=1; diviseur<nombre_utilisateur+1; diviseur++) {
        if (nombre_utilisateur%diviseur==0) {
            tableaux_tmp.push_back(diviseur);
        }
    }
    if (tableaux_tmp.size()==2) {
        est_premier_resultat=1;
    }
    return est_premier_resultat;
}

void TP6::nombre_premier(int start_nombre_premier,int end_nombre_premier,int test){
   
    for (int nombre=start_nombre_premier; nombre<end_nombre_premier+1; nombre++) {
        std::vector<int> tableaux_premier,tableaux_tmp;
        for (int diviseur=1; diviseur<nombre+1; diviseur++) {
        test=nombre%diviseur;
            if (test==0) {
                tableaux_tmp.push_back(diviseur);
            }
        }
        if (tableaux_tmp.size()==2) {
            std::cout<<"le nombre : "<<nombre<<" est premier "<<"\n";
        }
    }
    
}

equation_second_degre TP6::equation_solve_print(equation_second_degre valeur_utilisateur){
    
    if (valeur_utilisateur.a==0) {
        if (valeur_utilisateur.b==0) {
            if (valeur_utilisateur.c==0) {
                std::cout<<"L'equation X^2+b*x+c=0 comporte une infinité de solution"<<"\n";
                
            } else {
                std::cout<<"L'equation X^2+b*x+c=0 ne comporte aucun solution"<<"\n";
                
            }
        } else {
            valeur_utilisateur.solution1=-valeur_utilisateur.c/valeur_utilisateur.b;
            valeur_utilisateur.nombre_solution="une solution";
            std::cout<<"l'equation a une solution qui est : "<<valeur_utilisateur.solution1;
        }
    } else {
        valeur_utilisateur.delta=valeur_utilisateur.b*valeur_utilisateur.b-4*valeur_utilisateur.a*valeur_utilisateur.c;
        if (valeur_utilisateur.delta>0 ) {
            
            valeur_utilisateur.solution1=(-valeur_utilisateur.b-std::sqrt(valeur_utilisateur.delta))/2*valeur_utilisateur.a;
            valeur_utilisateur.solution2=(-valeur_utilisateur.b+std::sqrt(valeur_utilisateur.delta))/2*valeur_utilisateur.a;
            std::cout<<"l'equation à deux solution qui sont : "<<valeur_utilisateur.solution1<<" et "<<valeur_utilisateur.solution2;
        }
        if (valeur_utilisateur.delta<0) {
            std::cout<<"La fonction à 0 solution"<<"\n";
            
        }
        if (valeur_utilisateur.delta==0) {
            valeur_utilisateur.solution1=-valeur_utilisateur.b/2*valeur_utilisateur.a;
            std::cout<<"L'equation a 1 solution qui est : "<<valeur_utilisateur.solution1<<"\n";
        }
    }
    return valeur_utilisateur;
}

equation_second_degre TP6::resoudre(equation_second_degre valeur_utilisateur){
    
    if (valeur_utilisateur.a==0) {
        if (valeur_utilisateur.b==0) {
            if (valeur_utilisateur.c==0) {
                valeur_utilisateur.nombre_solution="infinté";
                
            } else {
                valeur_utilisateur.nombre_solution="aucun solution";
            }
        } else {
            valeur_utilisateur.solution1=-valeur_utilisateur.c/valeur_utilisateur.b;
            valeur_utilisateur.nombre_solution="une solution";
        }
    } else {
        valeur_utilisateur.delta=valeur_utilisateur.b*valeur_utilisateur.b-4*valeur_utilisateur.a*valeur_utilisateur.c;
        if (valeur_utilisateur.delta>0 ) {
            valeur_utilisateur.solution1=(-valeur_utilisateur.b-std::sqrt(valeur_utilisateur.delta))/2*valeur_utilisateur.a;
            valeur_utilisateur.solution2=(-valeur_utilisateur.b+std::sqrt(valeur_utilisateur.delta))/2*valeur_utilisateur.a;
            valeur_utilisateur.nombre_solution="deux solution";
        }
        if (valeur_utilisateur.delta<0) {
            valeur_utilisateur.nombre_solution="aucun solution";
        }
        if (valeur_utilisateur.delta==0) {
            valeur_utilisateur.solution1=-valeur_utilisateur.b/2*valeur_utilisateur.a;
            valeur_utilisateur.nombre_solution="une solution";
        }
    }
    return valeur_utilisateur;
}

