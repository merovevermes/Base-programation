//TP3.cpp

#include <iostream>

#include <cstdlib>
#include "TP4.hpp"

struct date  {
    char jour[10];
    int j;
    int m;
    int a;
};
int N;
date T[1000];


void TP4::exercice1(){
//    date incrementation;
//    std::cout<<"veuillez saisir la valeur du jour"<<std::endl;
//    std::cin>>incrementation.jour;
//    std::cout<<"veuillez siasir la valeur de la date"<<std::endl;
//    std::cin>>incrementation.j;
//    std::cout<<"veuilelz siaisr la valeur du moi"<<std::endl;
//    std::cin>>incrementation.m;
//    std::cout<<"veuillez saisir la valeur de l'année"<<std::endl;
//    std::cin>>incrementation.a;
//
//date T[1000];
//    for (int r=0; r<1000;r++) {
//
//       T[r]=incrementation;
//        std::cout<<incrementation.jour<<incrementation.j<<incrementation.m<<incrementation.a<<std::endl;
//
//    }
}


void TP4::exercice2(){
    date incrementation;
    std::cout<<"saisir le nombre de dates a traiter"<<std::endl;
    std::cin>>N;
    for (int r = 0; r<N; r++) {
        incrementation.j=std::rand()%31+1;
        incrementation.m=std::rand()%12+1;
        incrementation.a=std::rand()%3000;
        T[r]=incrementation;
        std::cout<<incrementation.j<<"/"<<incrementation.m<<"/"<<incrementation.a<<std::endl;
    }
}

void TP4::exercice3(){
    exercice2();
    int j_utilisateur=0,m_utilisateur=0,a_utilisateur=0;
    
    std::cout<<"veuillez saisir une date"<<std::endl;
    std::cin>>j_utilisateur;
    std::cin>>m_utilisateur;
    std::cin>>a_utilisateur;
    for (int b=0; b==N; b++) {
        if (T[b].j==j_utilisateur && T[b].m==m_utilisateur && T[b].a==a_utilisateur) {
            std::cout<<"Présent";
        } else {
            std::cout<<"Abscente";
        }
    }
    
}
