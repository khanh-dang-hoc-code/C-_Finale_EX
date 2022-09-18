//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_TEACHER_H
#define C___FINAL_EX_TEACHER_H

#include "../Person.h"
#include "memory"

class Account;
class Teacher : private Person{
private :
    shared_ptr<Account> account;
    static int tempCount;
public:
    Teacher(string name);

    const shared_ptr<Account> &getAccount() const;

    void setAccount(const shared_ptr<Account> &account);

    string getName();

    string getID();

    void inputData();

    void showData();

};


#endif //C___FINAL_EX_TEACHER_H
