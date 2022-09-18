//
// Created by khanh on 13/09/2022.
//

#include "Account.h"


const string ACCOUNT_CODE = "Account";
int Account::tempCount = 100;


Account::Account(){
    Account::accountID = ACCOUNT_CODE+ to_string(Account::tempCount);
    Account::tempCount++;
}
const string &Account::getAccountId() const {
    return accountID;
}

void Account::setAccountId(const string &accountId) {
    accountID = accountId;
}

const string &Account::getUserName() const {
    return userName;
}

void Account::setUserName(const string &userName) {
    Account::userName = userName;
}

const string &Account::getPassword() const {
    return password;
}

void Account::setPassword(const string &password) {
    Account::password = password;
}

Role Account::getRole() const {
    return role;
}

void Account::setRole(Role role) {
    Account::role = role;
}


Account::Account( const string &userName, const string &password, Role role) : userName(userName), password(password), role(role) {
    Account::accountID = ACCOUNT_CODE+ to_string(Account::tempCount);
    Account::tempCount++;
}

const shared_ptr<Teacher> &Account::getTeacher() const {
    return teacher;
}

void Account::setTeacher(const shared_ptr<Teacher> &teacher) {
    Account::teacher = teacher;
}



