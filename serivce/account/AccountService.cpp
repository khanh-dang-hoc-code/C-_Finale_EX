//
// Created by khanh on 13/09/2022.
//

#include "AccountService.h"

#include <utility>


vector<shared_ptr<Account>> AccountService::listAccount;

vector<shared_ptr<Account>> AccountService::getAll() {
    return AccountService::listAccount;
}

void AccountService::sort(SortEnum type) {

}

void AccountService::deleteByID(const string& id) {
    shared_ptr<Account> a = nullptr;
    a = findByID(std::move(id));
    if(a != nullptr){
        remove(listAccount.begin(), listAccount.end(),a);
        return;
    }
}

void AccountService::updateByID(const string& id) {
    shared_ptr<Account> a = nullptr;
    a = findByID(id);
    if(a != nullptr){
        cout<<"Enter Name";
        string name = Utils::inputString();
        a->setUserName(name);
        cout<<"Enter Password";
        string password = Utils::inputString();
        a->setPassword(password);
        return;
    }
}

void AccountService::addOne(const shared_ptr<Account>& account) {
    listAccount.push_back(account);
    Logger::logger(ACCOUNT_FILENAME, "Add new account with id " + account->getAccountId());
}

shared_ptr<Account> AccountService::findByID( string id) {
    for(shared_ptr<Account> a : listAccount){
        if(Utils::compareString(a->getAccountId(), id)) {
            return a;
        }
    }
    cout<<"Not found account "+id<<endl;
    return {};
}

shared_ptr<Account> AccountService::findByUserName(const string& name) {
    for(shared_ptr<Account> a : listAccount){
        if(Utils::compareString(a->getUserName(), name)) {
            return a;
        }
    }
    cout<<"Not found account "+name<<endl;
    return {};
}

