//
// Created by khanh on 13/09/2022.
//

#include "Answer.h"

const string &Answer::getAnswerContent() const {
    return answerContent;
}

void Answer::setAnswerContent(const string &answerContent) {
    Answer::answerContent = answerContent;
}


Answer::Answer() {}

const string &Answer::getId() const {
    return id;
}

void Answer::setId(const string &id) {
    Answer::id = id;
}

bool Answer::isCorrect1() const {
    return isCorrect;
}

void Answer::setIsCorrect(bool isCorrect) {
    Answer::isCorrect = isCorrect;
}

const shared_ptr<Question> &Answer::getQuestion() const {
    return question;
}

void Answer::setQuestion(const shared_ptr<Question> &question) {
    Answer::question = question;
}

bool Answer::isCorrect2() const {
    return isCorrect;
}

Answer::Answer(const string &answerContent, bool isCorrect) : answerContent(answerContent), isCorrect(isCorrect) {}
