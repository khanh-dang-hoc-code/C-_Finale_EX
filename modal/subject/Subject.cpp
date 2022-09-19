//
// Created by khanh on 13/09/2022.
//

#include "Subject.h"

Subject::Subject() {}

const string &Subject::getId() const {
    return id;
}

void Subject::setId(const string &id) {
    Subject::id = id;
}

const vector<shared_ptr<Major>> &Subject::getMajorList() const {
    return majorList;
}

void Subject::setMajorList(const vector<shared_ptr<Major>> &majorList) {
    Subject::majorList = majorList;
}

const vector<shared_ptr<Exam>> &Subject::getExamList() const {
    return examList;
}

void Subject::setExamList(const vector<shared_ptr<Exam>> &examList) {
    Subject::examList = examList;
}

Subject::Subject(const string &name) : name(name) {}

const string &Subject::getName() const {
    return name;
}

void Subject::setName(const string &name) {
    Subject::name = name;
}
