//
//  TP6.hpp
//  Base-Programation
//
//  Created by Mérové on 08/11/2021.
//

#ifndef TP6_hpp
#define TP6_hpp
#include "Structure.hpp"
#include <stdio.h>
class TP6{
public: 
        int est_premier(int nombre_utilisateur);
        void nombre_premier(int start_nombre_premier,int end_nombre_premier,int test);
        equation_second_degre equation_solve_print(equation_second_degre valeur_utilisateur);
    equation_second_degre resoudre(equation_second_degre valeur_utilisateur);
};
#endif /* TP6_hpp */
