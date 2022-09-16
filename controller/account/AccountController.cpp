//
// Created by khanh on 13/09/2022.
//

#include "AccountController.h"

const string PASSWORD = "user123";

void AccountController::addOne(Teacher &teacher) {
    Account acc;
    acc.setUserName(teacher.getName());
    acc.setRole(USER);
    acc.setPassword(PASSWORD);
    teacher.setAccount(&acc);
    AccountService::addOne(acc);
}

vector<Account> AccountController::getAll(){
    return AccountService::getAll();
}
