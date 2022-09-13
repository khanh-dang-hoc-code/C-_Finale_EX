//
// Created by khanh on 13/09/2022.
//

#include "Classes.h"

//0912986868

Classes::Classes(){
};

const string &Classes::getId() const {
    return id;
}

void Classes::setId(const string &id) {
    Classes::id = id;
}

vector<Student> *Classes::getStudentList() const {
    return studentList;
}

void Classes::setStudentList(vector<Student> *studentList) {
    Classes::studentList = studentList;
}

const Major &Classes::getMajor() const {
    return major;
}

void Classes::setMajor(const Major &major) {
    Classes::major = major;
}

