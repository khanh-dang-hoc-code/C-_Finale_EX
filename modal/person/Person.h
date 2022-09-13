//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_PERSON_H
#define C___FINAL_EX_PERSON_H

#include "string"

#include "../Classes.h"

using namespace std;
class Person {
private:
    string id;
    string name;
    Classes* classes;
public:
    Person();

    const string &getId() const;

    void setId(const string &id);

    const string &getName() const;

    void setName(const string &name);

    Classes *getClasses() const;

    void setClasses(Classes *classes);


};


#endif //C___FINAL_EX_PERSON_H
