//
// Created by khanh on 13/09/2022.
//

#include "Exam.h"

const Subject &Exam::getSubject() const {
    return subject;
}

void Exam::setSubject(const Subject &subject) {
    Exam::subject = subject;
}

vector<Question> *Exam::getQuestionList() const {
    return questionList;
}

void Exam::setQuestionList(vector<Question> *questionList) {
    Exam::questionList = questionList;
}

const string &Exam::getId() const {
    return id;
}

void Exam::setId(const string &id) {
    Exam::id = id;
}
