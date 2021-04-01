//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

Person::Person() {
    this->firstName = "";
    this->lastName = "";
    this->documentId = 0;
}

Person::Person(const std::string & firstName, const std::string & lastName, int documentId) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->documentId = documentId;
}

std::string Person::getFirstName() {
    return firstName;
}

void Person::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

std::string Person::getLastName() {
    return lastName;
}

void Person::setLastName(std::string lastName) {
    this->lastName = lastName;
}

int Person::getDocumentId() {
    return documentId;
}

void Person::setDocumentId(int documentId) {
    this->documentId =documentId;
}



