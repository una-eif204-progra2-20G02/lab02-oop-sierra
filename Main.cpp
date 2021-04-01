//
// Created by Maikol Guzman on 8/2/20.
//

#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"


int main() {
    Professor *prof;
    prof = new Professor("Mario", "Ruiz", 25685692, 300000, 0.05);
    Administrative * adm1;
    adm1 = new Administrative ("Carlos", "Lopez", 35698720 , 500000);
    University *uni;
    uni = new University("UNA", prof, adm1);

    std::vector<Professor> list;
    std::vector<Administrative> list1;
    list1.push_back(*adm1);
    list.push_back(*prof);
    std::cout << uni->getProfessor()->toString();
    std::cout << uni->getAdministrative()->toString();
    system("pause");
    return 0;
}
