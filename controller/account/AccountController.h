//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_ACCOUNTCONTROLLER_H
#define C___FINAL_EX_ACCOUNTCONTROLLER_H

#include "../../serivce/account/AccountService.h"
#include "vector"
#include "memory"

using namespace std;

class AccountController {
private :
    friend class AccountService;
public:
    static void addOne(shared_ptr<Account> account);
    static vector<shared_ptr<Account>> getAll();
    static shared_ptr<Account> findAccountByID(string id);
    static shared_ptr<Account> findAccontByUserName(string name);
    static void updateAccountWithID(string id);
    static void deleteAccountWithID(string id);
};


#endif //C___FINAL_EX_ACCOUNTCONTROLLER_H
