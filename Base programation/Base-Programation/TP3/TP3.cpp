//
//  TP3.cpp
//  TP1 Base programation
//
//  Created by Mérové on 08/10/2021.
//
#include <iostream>

#include <cstdlib>
#include <algorithm>
#include <vector>
#include <array>
#include <cctype>
#include "TP3.hpp"

void TP3::exercice1(){
    std::cout<<"veuillez saisir une valeur a et b : ";
    int tableaux[1000],compteur=0,a=0,b=0,randome=0,n=0;
    std::cin>>a;
    std::cin>>b;
    std::cout<<"veuillez saisir le nombre de valeur : ";
    std::cin>>compteur;
    while (compteur>1000) {
        std::cout<<"la nombre de valeur total doit être inferieur a 1000 ";
        std::cin>>compteur;
    }
    
    
    while (n<compteur){
        randome=rand() % b + a;
        tableaux[n]=randome;
        n++;
    }
    for (int i=0;i<compteur;i++)
        std::cout<<tableaux[i]<<' ';
    std::cout<<"Nous allons voir si le chiffre que vous allez marquer est compris dans le tableaux, veuillez saisir un nombre"<<std::endl;
    int c=0,e=0;
    std::cin>>c;
    for(int i=0;i<compteur;i++)
        if (c==tableaux[i])
            e=1;
    if (e==1) {
        std::cout<<"la valeur appartient au tableaux"<<std::endl;
        
    }
    else{
        std::cout<<"la valeur n'appartient pas au tableaux"<<std::endl;
    }
    int maximum=0,minimum=a;
    for (int i=0; i<compteur; i++) {
        if (maximum<tableaux[i]) {
            maximum=tableaux[i];
        }
        if (minimum>tableaux[i]) {
            minimum=tableaux[i];
        }
    }
    std::cout<<"La valeur maximum est : "<<maximum<<std::endl<<" La valeur minimum est : "<<minimum<<std::endl;
}
void TP3::exercice2(){
//    int taille=0,randome=0;
//    std::vector<int> tableaux;
//    std::cout<<"saisir la taille du tableaux";
//    std::cin>>taille;
//    while (taille>1000) {
//        std::cout<<"saisir la taille du tableaux";
//        std::cin>>taille;
//    }
//    srand (time(NULL));
//    for (int i=0; i<taille; i++) {
//        randome=rand() % 2 + 1;
//        tableaux.push_back(randome);
//    }
//    for (int i=0; i<taille; i++) {
//        std::cout<<tableaux[i];
//    }
//    std::cout<<std::endl;
//    int sizeofvector=0;
//    sizeofvector=tableaux.size();
//    std::cout<<"la taille du tableaux est de "<<sizeofvector<<std::endl;
//    std::sort(tableaux.begin(), tableaux.end());
//    for (int i=0;i<taille;i++)
//        std::cout<<tableaux[i]<<' ';
    int tableaux[1000],taille=0;
  
    std::cout<<"veuillez saisir la taille du tableaux "<<std::endl;
    std::cin>>taille;
    srand(time(NULL));
    for (int i=0; i<taille; i++) {
        tableaux[i]=rand() % 2+1;}
    for (int a=0; a<taille; a++) {
        std::cout<<tableaux[a];}
    int i=0,j=taille-1,tmp=0;
    while (i!=j) {
        if (tableaux[i]>tableaux[j]) {
            tmp=tableaux[i];
            tableaux[i]=tableaux[j];
            tableaux[j]=tmp;
            i++;
            j--;
        }
        if (tableaux[i]==2 && tableaux[j]==2) {
            j--;
        }
        if (tableaux[i]==1 && tableaux[j]==2) {
            j--;
            i++;
        }
        
    }
    std::cout<<std::endl;
    for (int a=0; a<taille; a++) {
        std::cout<<tableaux[a];
    }
    
    }
void TP3::exercice3(){
    
}
void TP3::exercice41(){
    char s[20];
    int b=0;
    std::cout<<"Donnez un mot de passe : ";
    std::cin>>s;
    int conditiona=0,conditionb=0,conditionc=0,conditiond=0;
    for (int rang=0;rang< sizeof s/sizeof s[0];rang++){
        if(isupper(s[rang])){
            conditiona++;
        }
        if (islower(s[rang])) {
            conditionb++;
        }
        if (isdigit(s[rang])) {
            conditionc++;
        }
        if (isspace(s[rang])) {
            conditiond++;
        }
        if (s[rang]=='\0') {
            b++;
            break;
        }
        
            
    }
if ((conditiona >= 1 && conditionb>=1 && conditionc>=1 && conditiond==0) && (b>=4||b<=12)) {
        std::cout<<"valider"<<std::endl;
}
    else{
        std::cout<<"invalide"<<std::endl;
    }
}
//
//void TP3::exercice42(){
//    srand(time(NULL));
//    char s[10];
//    int nb_essaies=0;
//    bool OK=false;
//    char symbols[10]={'!','$','?','&','/',')','(','+','-','='};
//    while (!OK and nb_essaies<=10) {
//        int taille=rand()%6+5;
//        for (int i =0; i<taille; i++) {
//            int d=rand() % 3 +1;
//            if (d==1)
//                s[i]=rand()%('Z'-'a'+1)+'a';
//           
//            if(d==2)
//                s[i]=rand()%('Z'-'A'+1)+'A';
//            
//        
//            if(d==3)
//                s[i]=rand()%('9'-0+1)+'0';}
//        s[taille]='\0';
//        nb_essaies++;
//        }
//    char cs=symbols[rand()%10];
//    std::cout<<"Entrez la chaine ";
//    for (int a=0;a<10;a++)
//         std::cout<<s[a];
//    std::cout<<" separrée par "<<cs<<std::endl;
////    validation a faire
//    int caracatere=rand()%10,valide=0;
//    char saisie;
//    std::cin>>saisie;
//    for (int i=0; i<10; i++) {
//        if (saisie[i]==s[s]) {
//            valide++;
//        }
//    }
//    if (valide==10) {
//        std::cout<<"les deux mots sont identique";
//    }
//       
//        
//    }
//

