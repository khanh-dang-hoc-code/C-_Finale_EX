//
// Created by khanh on 13/09/2022.
//

#include "MajorService.h"

vector<shared_ptr<Major>> MajorService::listMajor;

shared_ptr<Major> MajorService::findOneByID(string id) {
    if (listMajor.empty()) {
        return {};
    }
    for (shared_ptr<Major> m: listMajor) {
        if (Utils::compareString(m->getId(), id)) {
            return m;
        }
    }
    cout<<"Not found Major "<<id<<endl;
    return {};
}

void MajorService::addOne(shared_ptr<Major> major) {
    listMajor.push_back(major);
    Logger::logger(MAJOR_FILENAME, "Add new major with id " + major->getId());
}

shared_ptr<Major> MajorService::findOneByName(string name) {
    if (listMajor.empty()) {
        return {};
    }
    for (shared_ptr<Major> t: listMajor) {
        if (Utils::compareString(t->getName(), name)) {
            return t;
        }
    }
    cout << "Not found major " + name << endl;
    return {};
}

void MajorService::updateByID(string id) {
    if (listMajor.empty()) {
        cout << "No data " << endl;
        return;
    }
    shared_ptr<Major> a = findOneByID(id);
    if (a != nullptr) {
        cout << "Name" << endl;
        a->setName(Utils::inputString());
    }
}

void MajorService::deleteByID(string id) {
    if (listMajor.empty()) {
        cout << "No data " << endl;
        return;
    }
    shared_ptr<Major> a = findOneByID(id);
    if (a != nullptr) {
        remove(listMajor.begin(), listMajor.end(), a);
    }
}
