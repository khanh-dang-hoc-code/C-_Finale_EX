//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_ACCOUNTSERVICE_H
#define C___FINAL_EX_ACCOUNT_H

#include "string"

#include "../role/Role.h"
#include "../person/teacher/Teacher.h"

using namespace std;

class AccountService {
private:
    string accountID;
    string userName;
    string password;
    Role role;
    Teacher teacher;
public:
    AccountService(Teacher teacher);

    const string &getAccountId() const;

    void setAccountId(const string &accountId);

    const string &getUserName() const;

    void setUserName(const string &userName);

    const string &getPassword() const;

    void setPassword(const string &password);

    Role getRole() const;

    void setRole(Role role);

    const Teacher &getTeacher() const;

    void setTeacher(const Teacher &teacher);



};


#endif //C___FINAL_EX_ACCOUNTSERVICE_H
