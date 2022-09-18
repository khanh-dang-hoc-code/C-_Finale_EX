//
// Created by khanh on 13/09/2022.
//

#include "TeacherService.h"
#include "../../../modal/account/Account.h"
#include "../../../controller/account/AccountController.h"

vector<shared_ptr<Teacher>> TeacherService::listTeacher;

void TeacherService::addOne(shared_ptr<Teacher> teacher) {
    listTeacher.push_back(teacher);
    Logger::logger(TEACHER_FILENAME, "Add new teacher with id " + teacher->getID());
}

vector<shared_ptr<Teacher>> TeacherService::getAll() {
    return TeacherService::listTeacher;
}

shared_ptr<Teacher> TeacherService::findTeacherByID(string id) {
    if(listTeacher.empty()) return {};
    for (shared_ptr<Teacher> t : listTeacher){
        if(Utils::compareString(t->getID(), id)) {
            return t;
        }
    }
    cout<<"not found teacher "+id+"\n"<<endl;
    return {};
}

shared_ptr<Teacher> TeacherService::findTeacherByName(string name) {
    if(listTeacher.empty()) return {};
    for (shared_ptr<Teacher> t : listTeacher){
        if(Utils::compareString(t->getName(), name)) {
            return t;
        }
    }
    cout<<"not found teacher "+name<<endl;
    return {};
}

void TeacherService::deleteTeacherWithID(string id) {
    if(listTeacher.empty()) {
        cout<<"No data "<<endl;
        return;
    }

}

void TeacherService::updateTeacherWithID(string id) {
    if(listTeacher.empty()) {
        cout<<"No data "<<endl;
        return;
    };

}
