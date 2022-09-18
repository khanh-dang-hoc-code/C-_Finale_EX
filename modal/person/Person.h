//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_PERSON_H
#define C___FINAL_EX_PERSON_H

#include "string"
#include "iostream"

#include "../../utils/Utils.h"



using namespace std;

class Person {
private:
    string id;
    string name;
public:
    Person();

     Person(string name);

    const string &getId() const;

    void setId(const string &id);

    const string &getName() const;

    void setName(const string &name);

    void inputData();

    void showData();



};


#endif //C___FINAL_EX_PERSON_H
