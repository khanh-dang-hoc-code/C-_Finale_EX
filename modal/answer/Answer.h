//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_ANSWER_H
#define C___FINAL_EX_ANSWER_H

#include "../question/Question.h"
#include "string"

using namespace std;

class Answer {
private:
    Question question;
    string answerContent;
    bool isCorrect;
    string id;

public:
    Answer();

    const Question &getQuestion() const;

    void setQuestion(const Question &question);

    const string &getAnswerContent() const;

    void setAnswerContent(const string &answerContent);

    bool isCorrect1() const;

    void setIsCorrect(bool isCorrect);

    const string &getId() const;

    void setId(const string &id);

};


#endif //C___FINAL_EX_ANSWER_H
