//TP3.cpp

#include <iostream>
#include <ctime>
#include <time.h>

#include <cstdlib>
#include "TP4.hpp"

struct date  {
    char days_of_week[10];
    int jour;
    int mois;
    int année;
};
struct personne{
    char nom[30];
    char prénom[30];
    date naissance;
};

int N=100;
date T[1000];

void TP4::exercice1(){
//    date incrementation;
//    std::cout<<"veuillez saisir la valeur du days_of_week"<<std::endl;
//    std::cin>>incrementation.days_of_week;
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
//        std::cout<<incrementation.days_of_week<<incrementation.j<<incrementation.m<<incrementation.a<<std::endl;
//
//    }
}


void TP4::exercice2(){
    
    date incrementation;
    std::cout<<"saisir le nombre de dates a traiter"<<std::endl;
    std::cin>>N;
    for (int r = 0; r<N; r++) {
        incrementation.jour=std::rand()%31+1;
        incrementation.mois=std::rand()%12+1;
        incrementation.année=std::rand()%3000;
        T[r]=incrementation;
        std::cout<<incrementation.jour<<"/"<<incrementation.mois<<"/"<<incrementation.année<<std::endl;
    }
}

void TP4::exercice3(){
    exercice2();
    int j_utilisateur=0,m_utilisateur=0,a_utilisateur=0;
    
    std::cout<<"veuillez saisir une date"<<std::endl;
    std::cin>>j_utilisateur;
    std::cin>>m_utilisateur;
    std::cin>>a_utilisateur;
    bool test=false;
    for (int b=0; b<N; b++) {
        if (T[b].jour==j_utilisateur && T[b].mois==m_utilisateur && T[b].année==a_utilisateur) {
            test=true;
            break;
        } else {
            test=false;
        }
    }
    if (test==true) {
        std::cout<<"Présent"<<std::endl;
    } else {
        std::cout<<"Abscente";
    }
}


void TP4::exercice4(){
    date d1,d2;
    std::cout<<"veuillez saisir une premier date";
    std::cin>>d1.jour;
    std::cin>>d1.mois;
    std::cin>>d1.année;
    std::cout<<"veuillez saisir une deuxième date";
    std::cin>>d2.jour;
    std::cin>>d2.mois;
    std::cin>>d2.année;
    if (d1.année<d2.année) {
        std::cout<<"Antérieur"<<std::endl;
    }
    if (d1.année==d2.année && d1.mois<d2.mois) {
        std::cout<<"Antérieur"<<std::endl;
    }
    if (d1.année==d2.année && d1.mois==d2.mois && d1.jour<d2.jour) {
        std::cout<<"Antérieur"<<std::endl;
    }
    else
        std::cout<<"futur"<<std::endl;
}

//tm datev2;
void TP4::exercice5(){
//    for (int i=0; i<N; i++) {
//
//        T2[i].tm_mday=std::rand()%31+1;
//        T2[i].tm_mon=std::rand()%12+1;
//        T2[i].tm_year=std::rand()%3000+1900;
//        double difftime ( time_t T2[i].tm_mday, time_t T2[i].tm_mday);
    std::cout<<"veuillez saisir une date a rangé : "<<std::endl;
    date date_utilisateur,temp,temp2;
    date T[10]={
        {"lundi",1,1,2000},{"mardi",2,2,2000},{"mercredi",3,3,2000},{"jeudi",4,4,2000},{"vendredi",5,5,2000},{"samedi",6,6,2000},{"dimanche",7,7,2000}
    };
    std::cin>>date_utilisateur.jour;
    std::cin>>date_utilisateur.mois;
    std::cin>>date_utilisateur.année;
    std::cout<<"la date que vous voulez ranger : "<<date_utilisateur.jour<<"/"<<date_utilisateur.mois<<"/"<<date_utilisateur.année<<std::endl;
    for (int i=0; i<10; i++) {
        std::cout<<T[i].jour<<"/"<<T[i].mois<<"/"<<T[i].année<<std::endl;
        if (T[i].jour==date_utilisateur.jour &&  T[i].mois==date_utilisateur.mois && T[i].année==date_utilisateur.année){
            temp=T[i];
            T[i].jour=date_utilisateur.jour;
            T[i].mois=date_utilisateur.mois;
            T[i].année=date_utilisateur.année;
            for (int r=0;r<10;r++){
                temp2=T[i+1];
                T[i+1]=temp;
                T[i+2]=temp2;
        }
    }
        if(T[i].jour<date_utilisateur.jour &&  T[i].mois==date_utilisateur.mois && T[i].année==date_utilisateur.année)
            
    if (T[i].jour==0 &&  T[i].mois==0 && T[i].année==0){
        T[i].jour=date_utilisateur.jour;
        T[i].mois=date_utilisateur.mois;
        T[i].année=date_utilisateur.année;
        }
    }
}


void TP4::exercice6(){
    date T[331];
    int i=0;
        for (int a=2003; a<2004; a++) {
            for (int m=1; m<12; m++) {
                for (int j=1; j<31; j++) {
                    
                        i++;
                        T[i].jour=j;
                        T[i].mois=m;
                        T[i].année=a;
                     
                    }
                }
            }
        
    for (int c=0; c<331; c++) {
        std::cout<<T[c].jour<<"/"<<T[c].mois<<"/"<<T[c].année<<std::endl;
    }
    std::cout<<"veuillez saisir une date : "<<std::endl;
    date valeur_utilisateur;
    std::cin>>valeur_utilisateur.jour>>valeur_utilisateur.mois>>valeur_utilisateur.année;
    std::cout<<"veuillez saisir une deuxième date : "<<std::endl;
    date valeur_utilisateur2;
    std::cin>>valeur_utilisateur2.jour>>valeur_utilisateur2.mois>>valeur_utilisateur2.année;
    int start=0,end=0;
    for (int r=0; r<331; r++) {
        if (T[r].jour==valeur_utilisateur.jour && T[r].mois==valeur_utilisateur.mois && T[r].année==valeur_utilisateur.année) {
            start=r;
            
        }
        if (T[r].jour==valeur_utilisateur2.jour && T[r].mois==valeur_utilisateur2.mois && T[r].année==valeur_utilisateur2.année) {
            end=r;
        }
    }
            
            for (int i=start; i<end; i++) {
                std::cout<<T[i].jour<<"/"<<T[i].mois<<"/"<<T[i].année<<std::endl;
            }
        
    }
    
void TP4::exercice7(){
//    voir en haut du doc
    
}
void TP4::exercice8(){
//    personne Tableaux[1000];
}
void TP4::exercice9(){
    personne Tableaux1[331];
    personne valeur_utilisateur;
    int i=0;
    for (int année=2003; année<2004; année++) {
        for (int mois=1; mois<12; mois++) {
            for (int jour=1; jour<31; jour++) {
                i++;
                strcpy (Tableaux1[i].nom,"vermes");
                strcpy (Tableaux1[i].prénom,"merove");
                Tableaux1[i].naissance.jour=jour;
                Tableaux1[i].naissance.mois=mois;
                Tableaux1[i].naissance.année=année;
            }
        }
    }
    for (int c=0; c<331; c++) {
        std::cout<<Tableaux1[c].nom<<"-"<<Tableaux1[c].prénom<<"_"<<Tableaux1[c].naissance.jour<<"/"<<Tableaux1[c].naissance.mois<<"/"<<Tableaux1[c].naissance.année<<std::endl;
    }
    std::cout<<"veuillez saisir une date";
    std::cin>>valeur_utilisateur.naissance.jour>>valeur_utilisateur.naissance.mois>>valeur_utilisateur.naissance.année;
    for (int r=0; r<331; r++) {
        if (valeur_utilisateur.naissance.jour==Tableaux1[r].naissance.jour && valeur_utilisateur.naissance.mois==Tableaux1[r].naissance.mois && valeur_utilisateur.naissance.année==Tableaux1[r].naissance.année) {
            std::cout<<Tableaux1[r].naissance.jour<<"/"<<Tableaux1[r].naissance.mois<<"/"<<Tableaux1[r].naissance.année<<std::endl;

        }
    }
}
//fin exercice 8

void TP4::exercice10(){
    personne Tableaux_valeur[331];
    personne Valeur_utilisateur_start,Valeur_utilisateur_end;
    int i=0;
    for (int année=2003; année<2004; année++) {
        for (int mois=1; mois<12; mois++) {
            for (int jour=1; jour<31; jour++) {
                i++;
                strcpy (Tableaux_valeur[i].nom,"vermes");
                strcpy (Tableaux_valeur[i].prénom,"merove");
                Tableaux_valeur[i].naissance.jour=jour;
                Tableaux_valeur[i].naissance.mois=mois;
                Tableaux_valeur[i].naissance.année=année;
            }
        }
    }
    std::cout<<"veuillez saisir une date de départ : ";
    std::cin>>Valeur_utilisateur_start.naissance.jour>>Valeur_utilisateur_start.naissance.mois>>Valeur_utilisateur_start.naissance.année;
    std::cout<<"veuillez saisir une date de fin: ";
    std::cin>>Valeur_utilisateur_end.naissance.jour>>Valeur_utilisateur_end.naissance.mois>>Valeur_utilisateur_end.naissance.année;
    int rang_tableaux_start_def=0,rang_tableaux_end_def=0;
    for (int Parcours_tableaux=0; Parcours_tableaux<331; Parcours_tableaux++) {
        if (Tableaux_valeur[Parcours_tableaux].naissance.jour==Valeur_utilisateur_start.naissance.jour && Tableaux_valeur[Parcours_tableaux].naissance.mois==Valeur_utilisateur_start.naissance.mois && Tableaux_valeur[Parcours_tableaux].naissance.année==Valeur_utilisateur_start.naissance.année) {
            rang_tableaux_start_def=Parcours_tableaux;
        }
        if (Tableaux_valeur[Parcours_tableaux].naissance.jour==Valeur_utilisateur_end.naissance.jour && Tableaux_valeur[Parcours_tableaux].naissance.mois==Valeur_utilisateur_end.naissance.mois && Tableaux_valeur[Parcours_tableaux].naissance.année==Valeur_utilisateur_end.naissance.année) {
            rang_tableaux_end_def=Parcours_tableaux;
        }
    }
    for (int cout=rang_tableaux_start_def; cout<rang_tableaux_end_def; cout++) {
        std::cout<<Tableaux_valeur[cout].prénom<<"_"<<Tableaux_valeur[cout].nom<<"|"<<Tableaux_valeur[cout].naissance.jour<<"/"<<Tableaux_valeur[cout].naissance.mois<<"/"<<Tableaux_valeur[cout].naissance.année<<std::endl;
    }
}
//fin exercice10


