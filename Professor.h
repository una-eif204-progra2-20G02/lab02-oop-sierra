//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {
    double monthlySalary;
    double commissionRate;
public:
    Professor();
    Professor(double, double);
    Professor(const std::string&, const std::string&, int, double, double);
    virtual ~Professor() = default; // Si es necesario todos los destructores hijos
    double getMonthlySalary();
    void setMonthlySalary(double);
    double getCommissionRate();
    void setCommissionRate(double);
    const double salary() override;
    const std::string toString() override;


};

#endif //LAB02_OOP_PROFESSOR_H
