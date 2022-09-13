//
// Created by khanh on 13/09/2022.
//

#include "Classes.h"

//0912986868

Classes::Classes(){
};

const string &Classes::getId() const {
    return id;
}

void Classes::setId(const string &id) {
    Classes::id = id;
}

vector<Person> *Classes::getPersonList() const {
    return personList;
}

void Classes::setPersonList(vector<Person> *personList) {
    Classes::personList = personList;
}

