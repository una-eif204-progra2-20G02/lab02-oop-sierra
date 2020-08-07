//
// Created by Maikol Guzman on 8/2/20.
//

#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

int main() {

    Professor *prof = new Professor("Mario", "Ruiz", 25685692, 300000, 0.05);
    Administrative * adm1 = new Administrative ("Carlos", "Lopez", 35698720 , 500000);
    University *uni;
    std::vector<Professor> list;
    list.push_back(*prof);
    uni->setProfessorList(list);
    std::vector<Administrative> list1;
    list1.push_back(*adm1);
    uni->setAdministrativeList(list1);

    system("pause");
    return 0;
}