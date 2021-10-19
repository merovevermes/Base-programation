//
//  TP1.cpp
//  TP1 Base programation
//
//  Created by Mérové on 29/09/2021.
//
#include <iostream>
#include <math.h>
#include <vector>
#include <numeric>
#include "TP1.hpp"




// Exercice 1//
void TP1::exercice1(){
int A,B;
std::cout<<std::endl<<"saisir une valeur";
std::cin>>A;
std::cin>>B;
if (A>B) {
    std::cout<<"plus grand";
}
if (A<B) {
    std::cout<<"plus petit";
}
else{
    std::cout<<std::endl<<"égal";}
std::cout <<std::endl<< A;
std::cout <<std::endl<< B;
 std::cout<<std::endl;
    
}


//Exercice 2//
void TP1::exercice2(){
int l,L,surface;
std::cout<< std::endl<<"saisir la valeur l (L>l) : ";
std::cin>>l;
std::cout<< std::endl<<"saisir la valeur L (L>l) : ";
std::cin>>L;
if (L>l) {
    surface=l*L;
    std::cout<<std::endl<<"la surface est "<<surface;
}
else{std::cout<<std::endl<<"veuillez saisir des valeur correct(L>l)";}
 }



//Exercice 3//
void TP1::exercice3(){
int chiffre;
std::cout<<"veuillez saisir la valeur a comparer "<<std::endl;
std::cin>>chiffre;
if ((10<chiffre<=20) || (50<chiffre<=100)) {
    std::cout<<"le chiffre est compris dans les bornes"<<std::endl;
}
else
{std::cout<<std::endl<<"ce n'est pas compris dans l'intervalle"<<std::endl;}
}

void TP1::exercice4(){
//Exercice 4//
int a,b,c,temp=0;
std::cout<<"Veuillez saisir 3 valeur"<< std::endl;
std::cin>>a;
std::cin>>b;
std::cin>>c;
    if (a>b) {
        temp=b;
        b=a;
        a=temp;}
    
    if (b>c) {
        temp=c;
        c=b;
        b=temp;
        }
    
std::cout<<"a"<<a<<"b"<<b<<"c"<<c;
}






void TP1::exercice5(){
//exercice5//
int operand1,operand2,result;
char operat;
std::cout<<"veuillez saisir un nombre"<<std::endl;
std::cin>>operand1;
std::cout<<"Veuillez saisir un deuxième nombre differends de 0 si diviseur"<<std::endl;
std::cin>>operand2;
std::cout<<"Veuillez saisir un operateur "<<std::endl;
std::cin>>operat;
    if (operat=='/') {
        result=operand1/operand2;
        std::cout<<"le resultat de l'operation"<<result<<std::endl;
    }
    if (operat=='*') {
        result=operand1*operand2;
        std::cout<<"le resultat de l'operation"<<result<<std::endl;
    }
    if (operat=='-') {
        result=operand1-operand2;
        std::cout<<"le resultat de l'operation"<<result<<std::endl;
    }
    if (operat=='+') {
        result=operand1+operand2;
        std::cout<<"le resultat de l'operation"<<result<<std::endl;
    }

else
    std::cout<<"l'operation n'est pas bon";
    
}
void TP1::exercice6(){
//Exercice 6//

 int discriminant;
double a,b,c,solution1,solution2;
std::cout<<"Veuillez saisir la valeur a : "<<std::endl;
std::cin>>a;
std::cout<<"Veuillez saisir la valeur b : "<<std::endl;
std::cin>>b;
std::cout<<"Veuillez saisir la valeur c : "<<std::endl;
std::cin>>c;
std::cout<<"(a*x^2)+(b*x)+c=0"<<std::endl;
std::cout<<"on calcul le discriminant"<<std::endl;
discriminant=(b*b)-4*a*c;
std::cout<<"le discriminant est : "<<discriminant<<std::endl;
if (discriminant<0) {
    std::cout<<"l'expresion n'a pas de solution réel"<<std::endl;
    
}
if (discriminant==0) {
    std::cout<<"l'expresion a une unique solution"<<std::endl;
    solution1=-(b/2*a);
    std::cout<<"la solution est"<<solution1;
    
}
if (discriminant>0) {
    std::cout<<"l'expresion a deux solution distincte"<<std::endl;
    solution1=-(b-sqrt(discriminant))/2*a;
    std::cout<<"la premier solution est"<<solution1<<std::endl;
    solution2=-(b+sqrt(discriminant))/2*a;
    std::cout<<"la deuxieme solution est"<<solution2<<std::endl;
}

}
void TP1::exercice7(){
//Exercice 7//
int nombre=0,chiffre1=0,chiffre2=0,chiffre3=0,chiffre4=0;
std::cout<<"Veuillez saisir un nombre";
std::cin>>nombre;
if (nombre>10) {
    chiffre4=nombre%10;
    nombre=nombre/10;
}
if (nombre>10) {
    chiffre3=nombre%10;
    nombre=nombre/10;
}
if (nombre>10) {
    chiffre2=nombre%10;
    nombre=nombre/10;
}
if (nombre<10) {
    chiffre1=nombre;
}
std::cout<<"le première chiffre est : "<<chiffre1<<std::endl<<"le première chiffre est : "<<chiffre2<<std::endl<<"le troisième chiffre est : "<<chiffre3<<std::endl<<"le quatireme chiffre est : "<<chiffre4<<std::endl;
}
void TP1::exercice8(){
//Exercice 8//
double moyenne;
int valeur;
std::vector<int> vecteur;

std::cout<<"Veuillez saisir une valeur(1/5)";
std::cin>>valeur;
vecteur.push_back(valeur);
std::cout<<"Veuillez saisir une valeur(2/5)";
std::cin>>valeur;
vecteur.push_back(valeur);
std::cout<<"Veuillez saisir une valeur(3/5)";
std::cin>>valeur;
vecteur.push_back(valeur);
std::cout<<"Veuillez saisir une valeur(4/5)";
std::cin>>valeur;
vecteur.push_back(valeur);
std::cout<<"Veuillez saisir une valeur(5/5)"<<std::endl;
std::cin>>valeur;
vecteur.push_back(valeur);
std::cout<<"Voici la liste";
for (auto n : vecteur)
    std::cout<<n<<' ';
moyenne = std::accumulate( vecteur.begin(), vecteur.end(), 0 )/ vecteur.size();
std::cout<<std::endl<<"Et voici la moyenne"<<std::endl<<moyenne<<std::endl;
}

//Exercice 9//

void TP1::exercice9(){

std::vector<int>vector;
for (int i=0; i==6 ;i++ ){
    int valeur;
    std::cout<<"Veuillez saisir un nombre("<<i<<"/6) :"<<std::endl;
    std::cin>>valeur;
    vector.push_back(valeur);
}
std::sort(vector.begin(), vector.end());
for (auto const & n : vector){
    std::cout<<n<<' ';}
}
