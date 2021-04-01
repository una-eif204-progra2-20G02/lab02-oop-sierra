//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University() {}

University::University(const std::string &name, Professor *professor, Administrative *administrative) : name(name), professor(professor), administrative(administrative) {}

const std::string &University::getName() const {
    return name;
}

void University::setName(const std::string &name) {
    University::name = name;
}

Professor *University::getProfessor() const {
    return professor;
}

void University::setProfessor(Professor *professor) {
    University::professor = professor;
}

Administrative *University::getAdministrative() const {
    return administrative;
}

void University::setAdministrative(Administrative *administrative) {
    University::administrative = administrative;
}

const std::vector<Professor> &University::getProfessorList() const {
    return professorList;
}

void University::setProfessorList(const std::vector<Professor> &professorListAux) {
    University::professorList = professorList;
}

const std::vector<Administrative> &University::getAdministrativeList() const {
    return administrativeList;
}

void University::setAdministrativeList(const std::vector<Administrative> &administrativeListAux) {
       // administrativeList.swap(administrativeListAux);
        administrativeList.resize(administrativeListAux.size());
        for (int i =0; i<administrativeListAux.size(); i++){
            administrativeList[i] = administrativeListAux[i];
        }

   // University::administrativeList = administrativeList;
}
