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

const vector<shared_ptr<Student>> &Classes::getStudentList() const {
    return studentList;
}

void Classes::setStudentList(const vector<shared_ptr<Student>> &studentList) {
    Classes::studentList = studentList;
}

const shared_ptr<Major> &Classes::getMajor() const {
    return major;
}

void Classes::setMajor(const shared_ptr<Major> &major) {
    Classes::major = major;
}

const string &Classes::getName() const {
    return name;
}

void Classes::setName(const string &name) {
    Classes::name = name;
}

int Classes::getTotalStudent() const {
    return totalStudent;
}

void Classes::setTotalStudent(int totalStudent) {
    Classes::totalStudent = totalStudent;
}

int Classes::getMaxTotal() const {
    return maxTotal;
}

void Classes::setMaxTotal(int maxTotal) {
    Classes::maxTotal = maxTotal;
}

Classes::Classes(const string &name, int maxTotal) : name(name), maxTotal(maxTotal) {}


