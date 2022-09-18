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
#include "../../utils/Utils.h"
#include "../../controller/account/AccountController.h"
#include "../ServiceAbstractGeneric.h"
#include "memory"

using namespace std;

class AccountService : private ServiceAbstractGeneric<Account> {
private:
    static vector<shared_ptr<Account>> listAccount;
     static shared_ptr<Account> findByID(string id) ;
    static vector<shared_ptr<Account>> getAll();
    static void sort(SortEnum type);
    static void deleteByID(const string& id);
    static void updateByID(const string& id);
    static void addOne(const shared_ptr<Account>& account);
    static shared_ptr<Account> findByUserName(const string& name);
    friend class AccountController;

//    void addOne() override;
//    shared_ptr<Account> findOneByID(string id) override;
//    shared_ptr<Account> indOneByName(string name) override;
//    void updateByID(string id) override;
//    void deleteByID(string id) override;
};


#endif //C___FINAL_EX_ACCOUNTSERVICE_H
