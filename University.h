//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

class University {
private:
    std::string name;
    Professor* professor;
    Administrative* administrative;
    std::vector<Professor> professorList;
    std::vector<Administrative> administrativeList;
public:
    University(const std::string &name, Professor *professor, Administrative *administrative);

    const std::string &getName() const;

    void setName(const std::string &name);

    Professor *getProfessor() const;

    void setProfessor(Professor *professor);

    Administrative *getAdministrative() const;

    void setAdministrative(Administrative *administrative);

    const std::vector<Professor> &getProfessorList() const;

    void setProfessorList(const std::vector<Professor> &professorList);

    const std::vector<Administrative> &getAdministrativeList() const;

    void setAdministrativeList(const std::vector<Administrative> &administrativeList);

    University();

};


#endif //LAB02_OOP_UNIVERSITY_H
