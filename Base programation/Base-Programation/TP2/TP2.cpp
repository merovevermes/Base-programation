//
//  TP2.cpp
//  TP1 Base programation
//
//  Created by Mérové on 29/09/2021.
//
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "TP2.hpp"

void TP2::exercice1(){
    int a;
    std::cout<< "veuillez saisir une valeur inferieur à 100 :"<<std::endl;
    std::cin>>a;
    while (a>100) {
        std::cout<<"veuillez saisir une valeur inferieur à 100"<<std::endl;
        std::cin>>a;
    }
    std::cout<<"Merci pour le nombre "<<a<<std::endl;
}

void TP2::exercice2(int a){
    int result;
    std::cout<<"saisir un nombre en 2 et 9 : "<<std::endl;
    std::cin>>a;
    while (2>a && a<9) {
        std::cout<<"saisir un nombre en 2 et 9 : "<<std::endl;
        std::cin>>a;
    }
    int i=0;
    if (2<=a && a<=9) {
        for (i=0; i<=10; i++) {
            result=a*i;
            std::cout<<a<<"x"<<i<<"="<<result<<std::endl;
    }
        
    }
    
}

void TP2::exercice3(){
    int a=1;
    double moyenne;
    std::vector<int> vecteur;
    while (a!=0) {
            std::cout<<"veuillez saisir une valeur "<<std::endl;
            std::cin>>a;
            vecteur.push_back(a);
    }
    

    for (auto n  : vecteur)
        std::cout<<n<<' ';
    moyenne = std::accumulate(vecteur.begin(), vecteur.end(), 0)/vecteur.size();
    std::cout<<std::endl<<"et voici la moyenne : " << moyenne<<std::endl;
//    donner le min et max d'un vecteur
    const auto [min, max] = std::minmax_element(begin(vecteur), end(vecteur));
        std::cout << "min = " << *min << ", max = " << *max << '\n';

        
    }
    

void TP2::exercice4(){
    std::vector<int> vpaire;
    std::vector<int> vimpaire;
    std::vector<int> liste;
    
    int a=1,b;
    while (a!=0) {
        std::cout<<"veuillez saisir une valeur "<< std::endl;
        std::cin>>a;
        b=a%2;
        if (b==0) {
            vpaire.push_back(a);
        }
        if (b==1) {
            vimpaire.push_back(a);
        }
        
    }
    std::cout<<"Les chiffre pairs sont : ";
    for (auto n : vpaire)
        std::cout<<n<<' ';
    std::cout<<"les chiffre impaire sont : ";
    for (auto n : vimpaire)
        std::cout<<n<<' ';
    std::cout<<std::endl;
    const auto [minpaire,maxpaire] = std::minmax_element(begin(vpaire), end(vpaire));
    std::cout <<"pour la liste paire le " <<"min = " <<*minpaire<< ", max = " <<*maxpaire<< '\n';
    std::cout <<"et voici la moyenne des nombre paire : "<<std::accumulate(vpaire.begin(), vpaire.end(), 0)/vpaire.size()<<std::endl;
    
    const auto [minimpaire,maximpaire] = std::minmax_element(begin(vimpaire), end(vimpaire));
    std::cout<<"pour la liste impaire le " <<"min =" <<*minimpaire<< " et le max = " <<*maximpaire<<'\n';
//    voici la moyenne
    std::cout <<"et voici la moyene des nombre impaire : "<<std::accumulate(vimpaire.begin(), vimpaire.end(), 0)/vimpaire.size()<<std::endl;
    }






void TP2::exercice5(){

    int a=0,chiffre=0,compteur=0;
    std::vector<int> moyenneglob;
    char b;
    b='o';
//    recommancer la partie
    while (b=='o') {
        std::srand(std::time(nullptr));
        chiffre=rand();
        std::cout<<chiffre;
        while (a!=chiffre) {
            std::cout<<"veuillez saisir un chiffre";
            std::cin>>a;
            compteur++;
            if (a<chiffre) {
                std::cout<<"le chiffre est plus grand.";
                
            }
            if (a>chiffre) {
                std::cout<<"le chiffre est plus petit.";
            
            }
        }
        moyenneglob.push_back(compteur);
        std::cout<<"bravo ! Vous avez mis "<<compteur<<" à trouver le bon chiffre. "<<std::endl;
        compteur=0;
        std::cout<<"Voulez vous continuer a jouer ? ";
        std::cin>>b;
    }
    std::cout<<" et voici la moyenne de tentative des partie précedent : "<< std::accumulate(moyenneglob.begin(), moyenneglob.end(), 0)/moyenneglob.size()<<std::endl;
    std::cout<<"A bientôt"<<std::endl;
}
    
void TP2::exercice6(){
    int largeur=0,hauteur=0;
    std::cout<<"veuillez saisir une largeur";
    std::cin>>largeur;
    std::cout<<"veuillez saisir une hauteur";
    std::cin>>hauteur;
    for (int a=0; a<hauteur; a++) {
        std::cout<<std::endl;
        for (int i=0; i<largeur; i++) {
            std::cout<<"*";
        }
    
    }
    std::cout<<std::endl;
}

void TP2::exercice7(){
    int width=0;
       int height=0;

       while (width % 2 == 0 || width < 15 || width > 20) {
           std::cout << "Entrez une taille de croix impaire entre 15 et 20: ";
           std::cin >> width;
       }
       height=width;

       for (int y = 1; y <= height; y++)
       {
           for (int x = 1; x <= width; x++)
           {
               if (x==y || x==width-(y-1))
               {
                   std::cout << "*";
               }
               else
               {
                   std::cout << " ";
               }
           }
           std::cout << std::endl;
       }
   }

void TP2::exercice8(){
    
    int nombre,factorielle=1;
    std::vector<int> liste;
    std::cout<<"veuillez saisir la valeur que vous shouaiter"<<std::endl;
    std::cin>>nombre;
    for (int i=1; i<=nombre; i++) {
        liste.push_back(i);
        factorielle=i*factorielle;
    }
    std::cout<<factorielle;
}


void TP2::exercice9(){
    int min=0,max=0,size=0,result=0;
    std::vector<int> listediviseur;
    std::vector<int> listepremier;
    std::cout<<"Veuillez saisir un nombre minimum supérieur a 1 : ";
    std::cin>>min;
    std::cout<<"Veuillez saisir un nombre maximum : ";
    std::cin>>max;
    for (int nombre=min; nombre>max; nombre++) {
        for (int diviseur=1; diviseur>nombre; diviseur++) {
            result=nombre%diviseur;
            if (result==0)
                listediviseur.push_back(diviseur);
            
        }
        size=listediviseur.size();
        if (size==2)
            listepremier.push_back(nombre);
    }
           

    
    std::cout<<"les nombre premier sont : ";
    for (auto n : listepremier);
        }
    

 
    
    
    
