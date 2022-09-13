//
// Created by khanh on 13/09/2022.
//

#include "Subject.h"

vector<Major> *Subject::getMajorList() const {
    return majorList;
}

void Subject::setMajorList(vector<Major> *majorList) {
    Subject::majorList = majorList;
}

vector<Exam> *Subject::getExamList() const {
    return examList;
}

void Subject::setExamList(vector<Exam> *examList) {
    Subject::examList = examList;
}

Subject::Subject() {}

const string &Subject::getId() const {
    return id;
}

void Subject::setId(const string &id) {
    Subject::id = id;
}
