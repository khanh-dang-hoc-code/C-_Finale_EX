//
// Created by khanh on 13/09/2022.
//

#include "Answer.h"

const Question &Answer::getQuestion() const {
    return question;
}

void Answer::setQuestion(const Question &question) {
    Answer::question = question;
}

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
