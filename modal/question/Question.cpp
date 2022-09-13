//
// Created by khanh on 13/09/2022.
//

#include "Question.h"

const Exam &Question::getExam() const {
    return exam;
}

void Question::setExam(const Exam &exam) {
    Question::exam = exam;
}

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

vector<Answer> *Question::getAnswerList() const {
    return answerList;
}

void Question::setAnswerList(vector<Answer> *answerList) {
    Question::answerList = answerList;
}

