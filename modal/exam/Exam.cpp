//
// Created by khanh on 13/09/2022.
//

#include "Exam.h"

const string &Exam::getId() const {
    return id;
}

void Exam::setId(const string &id) {
    Exam::id = id;
}

const vector<shared_ptr<Question>> &Exam::getQuestionList() const {
    return questionList;
}

void Exam::setQuestionList(const vector<shared_ptr<Question>> &questionList) {
    Exam::questionList = questionList;
}

const shared_ptr<Subject> &Exam::getSubject() const {
    return subject;
}

void Exam::setSubject(const shared_ptr<Subject> &subject) {
    Exam::subject = subject;
}
