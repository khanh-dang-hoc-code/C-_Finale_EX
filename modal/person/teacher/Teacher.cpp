//
// Created by khanh on 13/09/2022.
//

#include "Teacher.h"

const string TEACHER_CODE = "TeacherService";
int Teacher::tempCount = 1000;



void Teacher::inputData() {
    Person::inputData();
    string id = TEACHER_CODE + to_string(Teacher::tempCount);
    Person::setId(id);
    Teacher::tempCount++;
}

void Teacher::showData() {
    Person::showData();
}

string Teacher::getName() {
    return Person::getName();
}

string Teacher::getID() {
    return Person::getId();
}

const shared_ptr<Account> &Teacher::getAccount() const {
    return account;
}

void Teacher::setAccount(const shared_ptr<Account> &account) {
    Teacher::account = account;
}

Teacher::Teacher(string name) {
    Person::setName(name);
    string id = TEACHER_CODE + to_string(Teacher::tempCount);
    Person::setId(id);
    Teacher::tempCount++;
}
