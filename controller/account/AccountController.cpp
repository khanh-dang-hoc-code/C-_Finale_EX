//
// Created by khanh on 13/09/2022.
//

#include "AccountController.h"

#include <utility>

const string PASSWORD = "user123";

void AccountController::addOne(shared_ptr<Account> account) {
    account->setPassword(PASSWORD);
    AccountService::addOne(account);
}

vector<shared_ptr<Account>> AccountController::getAll(){
    return AccountService::getAll();
}

shared_ptr<Account> AccountController::findAccontByUserName(string name) {
    return AccountService::findByUserName(name);
}

void AccountController::deleteAccountWithID(string id) {
    AccountService::deleteByID(std::move(id));
}

shared_ptr<Account> AccountController::findAccountByID(string id) {
   return  AccountService::findByID(std::move(id));
}

void AccountController::updateAccountWithID(string id) {
    AccountService::updateByID(std::move(id));
}
