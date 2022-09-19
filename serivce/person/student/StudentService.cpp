//
// Created by khanh on 13/09/2022.
//

#include "StudentService.h"

vector<shared_ptr<Student>> StudentService::listStudent;

void StudentService::addOne(shared_ptr<Student> student) {
    listStudent.push_back(student);
    Logger::logger(STUDENT_FILENAME, "Add new student with id "+ student->getId());
}

shared_ptr<Student> StudentService::findOneByID(string id) {
    if (listStudent.empty()) {
        return {};
    }
    for (shared_ptr<Student> stu : listStudent) {
        if(Utils::compareString(stu->getId(), id)) {
            return stu;
        }
    }
    cout<<"Not found student "<<id<<endl;
    return {};
}

shared_ptr<Student> StudentService::findOneByName(string name) {
    if (listStudent.empty()) {
        return {};
    }
    for (shared_ptr<Student> stu : listStudent) {
        if(Utils::compareString(stu->getName(), name)) {
            return stu;
        }
    }
    cout<<"Not found student "<<name<<endl;
    return {};
}

void StudentService::updateByID(string id) {
    if (listStudent.empty()) {
        cout << "No data " << endl;
        return;
    }
    shared_ptr<Student> stuDel = findOneByID(id);
    if (stuDel != nullptr) {
        cout<<"Name"<<endl;
        stuDel->setName(Utils::inputString());
    }
}

void StudentService::deleteByID(string id) {
    if (listStudent.empty()) {
        cout << "No data " << endl;
        return;
    }
    shared_ptr<Student> stuDel = findOneByID(id);
    if (stuDel != nullptr) {
        remove(listStudent.end(), listStudent.end(), stuDel);
    }
}
