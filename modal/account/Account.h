//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_ACCOUNT_H
#define C___FINAL_EX_ACCOUNT_H

#include "string"

#include "../role/Role.h"
#include "memory"

using namespace std;

class Teacher;
class Account {
private:
    string accountID;
    string userName;
    string password;
    Role role;
    static int tempCount;
    shared_ptr<Teacher> teacher ;
public:

    Account();

    Account(const string &userName, const string &password, Role role);

    const string &getAccountId() const;

    void setAccountId(const string &accountId);

    const string &getUserName() const;

    void setUserName(const string &userName);

    const string &getPassword() const;

    void setPassword(const string &password);

    Role getRole() const;

    void setRole(Role role);

    const shared_ptr<Teacher> &getTeacher() const;

    void setTeacher(const shared_ptr<Teacher> &teacher);

    void inputData();

};


#endif //C___FINAL_EX_ACCOUNT_H
