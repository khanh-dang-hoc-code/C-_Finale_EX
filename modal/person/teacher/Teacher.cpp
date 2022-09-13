//
// Created by khanh on 13/09/2022.
//

#include "Teacher.h"

const string TEACHER_CODE = "Teacher";
int Teacher::tempCount = 1000;

AccountService *Teacher::getAccount() const {
    return account;
}

void Teacher::setAccount(AccountService *account) {
    Teacher::account = account;
}

Teacher::Teacher(AccountService *account) : account(account) {}

void Teacher::inputData() {
    Person::inputData();
    string id = TEACHER_CODE + to_string(this->tempCount);
    Person::setId(id);
    this->tempCount++;
}

void Teacher::showData() {
    Person::showData();
}
