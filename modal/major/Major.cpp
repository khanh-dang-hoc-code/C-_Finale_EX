//
// Created by khanh on 13/09/2022.
//

#include "Major.h"

const string MAJOR_CODE = "Major";

int Major::countTemp = 1000;

Major::Major() {
    string a = MAJOR_CODE + to_string(countTemp);
    this->id = a;
    countTemp++;
}

const string &Major::getId() const {
    return id;
}

void Major::setId(const string &id) {
    Major::id = id;
}

const string &Major::getName() const {
    return name;
}

void Major::setName(const string &name) {
    Major::name = name;
}

const vector<shared_ptr<Classes>> &Major::getClassList() const {
    return classList;
}

void Major::setClassList(const vector<shared_ptr<Classes>> &classList) {
    Major::classList = classList;
}

const vector<shared_ptr<Subject>> &Major::getSubjectList() const {
    return subjectList;
}

void Major::setSubjectList(const vector<shared_ptr<Subject>> &subjectList) {
    Major::subjectList = subjectList;
}

Major::Major(const string &name) : name(name) {}

