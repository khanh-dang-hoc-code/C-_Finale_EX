//
// Created by khanh on 13/09/2022.
//

#include "Account.h"

const string &AccountService::getAccountId() const {
    return accountID;
}

void AccountService::setAccountId(const string &accountId) {
    accountID = accountId;
}

const string &AccountService::getUserName() const {
    return userName;
}

void AccountService::setUserName(const string &userName) {
    AccountService::userName = userName;
}

const string &AccountService::getPassword() const {
    return password;
}

void AccountService::setPassword(const string &password) {
    AccountService::password = password;
}

Role AccountService::getRole() const {
    return role;
}

void AccountService::setRole(Role role) {
    AccountService::role = role;
}


const Teacher &AccountService::getTeacher() const {
    return teacher;
}

void AccountService::setTeacher(const Teacher &teacher) {
    AccountService::teacher = teacher;
}

AccountService::AccountService(Teacher teacher) : teacher(teacher) {}
