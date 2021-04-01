//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {
    double monthlySalary;

public:
    Administrative();
    Administrative(double monthlySalary);
    Administrative(const std::string&, const std::string&,int, double);
    double getMonthlySalary();
    void setMonthlySalary(double);
    const double salary() override;
    const std::string toString() override;
    virtual ~Administrative() = default;
};


#endif //LAB02_OOP_ADMINISTRATIVE_H
