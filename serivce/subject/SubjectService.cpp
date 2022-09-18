//
// Created by khanh on 13/09/2022.
//

#include "SubjectService.h"

vector<shared_ptr<Subject>> SubjectService::listSubject;

void SubjectService::addOne(shared_ptr<Subject> subject) {
    listSubject.push_back(subject);
    Logger::logger(SUBJECT_FILENAME, "Add new subject with id " + subject->getId());
}

shared_ptr<Subject> SubjectService::findSubjectWithID(string subjectID) {
    shared_ptr<Subject> a;
    for (int i = 0; i < listSubject.size(); ++i) {
        if(Utils::compareString(listSubject.at(i)->getId(), subjectID)) {
            return listSubject.at(i);
        }
    }
    return {};
}

shared_ptr<Subject> SubjectService::findSubjectWithMajorID(string majorID) {
    return {};
}

vector<shared_ptr<Subject>> SubjectService::getList() {
    return listSubject;
}
