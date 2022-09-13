//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_TEACHER_H
#define C___FINAL_EX_TEACHER_H

#include "../Person.h"

class AccountService;
class Teacher : private Person{
private :
    AccountService* account;
    static int tempCount;
public:
    explicit Teacher(AccountService *account);


    AccountService *getAccount() const;

    void setAccount(AccountService *account);

    void inputData();

    void showData();

};


#endif //C___FINAL_EX_TEACHER_H
