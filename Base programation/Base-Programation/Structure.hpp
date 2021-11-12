//
//  Structure.h
//  Base-Programation
//
//  Created by Mérové on 22/10/2021.
//

#ifndef Structure_h
#define Structure_h

#include <string>
struct date{
    int jour;
    int mois;
    int année;
};
struct equation_second_degre{
    int a;
    int b;
    int c;
    int Solution;
    int delta;
    int solution1;
    int solution2;
    std::string nombre_solution;
    
};
#endif /* Structure_h */
