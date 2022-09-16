//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_TEACHER_H
#define C___FINAL_EX_TEACHER_H

#include "../Person.h"

class Account;
class Teacher : private Person{
private :
    Account* account;
    static int tempCount;
public:


    Account *getAccount() const;

    void setAccount(Account *account);

    string getName();

    string getID();

    void inputData();

    void showData();

    Teacher();
};


#endif //C___FINAL_EX_TEACHER_H
