//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_ACCOUNTSERVICE_H
#define C___FINAL_EX_ACCOUNTSERVICE_H

#include "vector"
#include "iostream"

#include "../../modal/account/Account.h"
#include "../../resource/SortEnum.h"
#include "../../resource/Resource.h"
#include "../../logger/Logger.h"

using namespace std;

class AccountService {
private:
    static vector<Account> listAccount;
public:
    static Account* findByID(string id);
    static vector<Account> getAll();
    static void sort(SortEnum type);
    static void deleteByID(string id);
    static void updateByID(string id);
    static void addOne(Account account);
    static Account* findByUserName(string name);
};


#endif //C___FINAL_EX_ACCOUNTSERVICE_H
