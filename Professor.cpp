//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor() {
    this->commissionRate = 0.0;
    this->monthlySalary = 0.0;
}

Professor::Professor(double monthlySalary, double commissionRate) {
    this->monthlySalary = monthlySalary;
    this->commissionRate = commissionRate;
}
// Revisar Constructor con Persona
Professor::Professor(const std::string& firstName, const std::string& lastName, int documentId, double monthlySalary, double commissionRate) : Person(firstName, lastName, documentId) {
    this->monthlySalary = monthlySalary;
    this->commissionRate = commissionRate;
}

double Professor::getMonthlySalary() {
    return monthlySalary;
}

void Professor::setMonthlySalary(double monthlySalary) {
    this->monthlySalary = monthlySalary;
}

double Professor::getCommissionRate() {
    return commissionRate;
}

void Professor::setCommissionRate(double commissionRate) {
    this->commissionRate = commissionRate;
}

const double Professor::salary() {
    return monthlySalary + (monthlySalary*commissionRate);
}

const std::string Professor::toString() {
    std::stringstream s;
    s << "\tProfessor Information: " << getFirstName() << getLastName() << std::endl;
    s << "\tDoc ID:  " << getDocumentId() << ", " << "Monthly Salary: " << monthlySalary << std::endl;
    return s.str();
}
