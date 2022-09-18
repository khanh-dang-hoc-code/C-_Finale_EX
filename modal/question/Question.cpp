//
// Created by khanh on 13/09/2022.
//

#include "Question.h"

const string &Question::getQuestionContent() const {
    return questionContent;
}

void Question::setQuestionContent(const string &questionContent) {
    Question::questionContent = questionContent;
}


const string &Question::getId() const {
    return id;
}

void Question::setId(const string &id) {
    Question::id = id;
}

const vector<shared_ptr<Answer>> &Question::getAnswerList() const {
    return answerList;
}

void Question::setAnswerList(const vector<shared_ptr<Answer>> &answerList) {
    Question::answerList = answerList;
}

const shared_ptr<Exam> &Question::getExam() const {
    return exam;
}

void Question::setExam(const shared_ptr<Exam> &exam) {
    Question::exam = exam;
}

Question::Question(const string &questionContent) : questionContent(questionContent) {}

