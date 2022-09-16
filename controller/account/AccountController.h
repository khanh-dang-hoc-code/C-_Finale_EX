//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_ACCOUNTCONTROLLER_H
#define C___FINAL_EX_ACCOUNTCONTROLLER_H

#include "../../serivce/account/AccountService.h"
#include "vector"

using namespace std;

class AccountController {
private :
    friend class AccountService;
public:
    static void addOne( Teacher &teacher);
    static vector<Account> getAll();
};


#endif //C___FINAL_EX_ACCOUNTCONTROLLER_H
