//
// Created by khanh on 14/09/2022.
//

#include "TeacherController.h"


vector<shared_ptr<Teacher>> TeacherController::getAll() {
    return TeacherService::getAll();
}

void TeacherController::addOne() {
//    cout<<"Name"<<endl;
    string name = "teacher";
//    Utils::inputString();
    shared_ptr<Teacher> teacher(new Teacher(name));
    shared_ptr<Account> acc(new Account(teacher->getID(),"", USER));
    acc->setTeacher(teacher);
    teacher->setAccount(acc);
    AccountController::addOne(acc);
    TeacherService::addOne(teacher);
}
