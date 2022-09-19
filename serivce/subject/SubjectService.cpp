//
// Created by khanh on 13/09/2022.
//

#include "SubjectService.h"

vector<shared_ptr<Subject>> SubjectService::listSubject;

void SubjectService::addOne(shared_ptr<Subject> subject) {
    listSubject.push_back(subject);
    Logger::logger(SUBJECT_FILENAME, "Add new subject with id " + subject->getId());
}

shared_ptr<Subject> SubjectService::findOneByID(string id) {
    if (listSubject.empty()) {
        return {};
    }
    for (shared_ptr<Subject> sub: listSubject) {
        if (Utils::compareString(sub->getId(), id)) {
            return sub;
        }
    }
    cout << "Not found Subject " << id << endl;
    return {};
}

shared_ptr<Subject> SubjectService::findOneByName(string name) {
    if (listSubject.empty()) {
        return {};
    }
    for (shared_ptr<Subject> sub: listSubject) {
        if (Utils::compareString(sub->getName(), name)) {
            return sub;
        }
    }
    cout << "Not found Subject " << name << endl;
    return {};
}

void SubjectService::updateByID(string id) {
    if (listSubject.empty()) {
        cout << "No data " << endl;
        return;
    }
    shared_ptr<Subject> subUpudate = findOneByID(id);
    if (subUpudate != nullptr) {
        cout << "Name" << endl;
        subUpudate->setName(Utils::inputString());
    }
}

void SubjectService::deleteByID(string id) {
    if (listSubject.empty()) {
        cout << "No data " << endl;
        return;
    }
    shared_ptr<Subject> subDel = findOneByID(id);
    if (subDel != nullptr) {
        remove(listSubject.end(), listSubject.end(), subDel);
    }
}
