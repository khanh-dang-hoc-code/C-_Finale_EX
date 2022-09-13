//
// Created by khanh on 13/09/2022.
//

#include "Person.h"

Person::Person(){}

const string &Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    Person::id = id;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

void Person::inputData() {
    cout<<"Name"<<endl;
    this->name = Utils::inputString();
}

void Person::showData() {
    cout<<this->id<<this->name<<endl;
}