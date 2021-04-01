//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>

/**
 * Abstract Class of Person
 */
class Person {
    std::string firstName;
    std::string lastName;
    int documentId;
public:
    Person();
    Person(const std::string&, const std::string&, int);
    virtual ~Person() = default;
    std::string getFirstName();
    void setFirstName(const std::string);
    std::string getLastName();
    void setLastName(const std::string);
    int getDocumentId();
    void setDocumentId(int);
    virtual const double salary() = 0;
    virtual const std::string toString() = 0;
};


#endif //LAB02_OOP_PERSON_H
