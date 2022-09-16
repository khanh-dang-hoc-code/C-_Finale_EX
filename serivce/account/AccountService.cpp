//
// Created by khanh on 13/09/2022.
//

#include "AccountService.h"


vector<Account> AccountService::listAccount;

vector<Account> AccountService::getAll() {
    return AccountService::listAccount;
}

void AccountService::sort(SortEnum type) {

}

void AccountService::deleteByID(string id) {

}

void AccountService::updateByID(string id) {

}

void AccountService::addOne(Account account) {
    listAccount.push_back(account);
    Logger::logger(ACCOUNT_FILENAME, "Add new account with id " + account.getAccountId());
}

Account* AccountService::findByID(string id) {
    return nullptr;
}

Account* AccountService::findByUserName(string name) {
    return nullptr;
}

