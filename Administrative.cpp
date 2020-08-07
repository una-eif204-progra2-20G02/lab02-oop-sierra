//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative() {
    this->monthlySalary=0.0;
}

Administrative::Administrative(double monthlySalary) {
    this->monthlySalary=monthlySalary;
}

Administrative::Administrative(const std::string& firstName, const std::string& lastName, int documentId, double monthlySalary) : Person(firstName, lastName, documentId) {
this->monthlySalary=monthlySalary;
}

double Administrative::getMonthlySalary() {
    return this->getMonthlySalary();
}

void Administrative::setMonthlySalary(double monthlySalary) {
    this->monthlySalary=monthlySalary;
}

const double Administrative::salary() {
    return this->monthlySalary;
}

const std::string Administrative::toString() {
    std::stringstream s;
    s << "\tAdministrative Information: " << getFirstName() << getLastName() << std::endl;
    s << "\tDoc ID:  " << getDocumentId() << ", " << "Monthly Salary: " << monthlySalary << std::endl;
    return s.str();
}










