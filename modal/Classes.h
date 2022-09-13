//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_CLASSES_H
#define C___FINAL_EX_CLASSES_H

#include "string"
//#include "./person/Person.h"

#include "iostream"
#include "vector"
//#include "person/Person.h"

using namespace std;
class Person;
class Classes {
private :
    string id;
    vector<Person>* personList;
public:
    Classes();

    const string &getId() const;

    void setId(const string &id);

    vector<Person> *getPersonList() const;

    void setPersonList(vector<Person> *personList);

    void test(){

    }
};


#endif //C___FINAL_EX_CLASSES_H
