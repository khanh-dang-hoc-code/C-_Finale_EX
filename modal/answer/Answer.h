//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_ANSWER_H
#define C___FINAL_EX_ANSWER_H

#include "string"
#include "memory"

using namespace std;

class Question;
class Answer {
private:
    shared_ptr<Question> question;
    string answerContent;
    bool isCorrect;
    string id;

public:
    Answer();

    Answer(const string &answerContent, bool isCorrect);

    const shared_ptr<Question> &getQuestion() const;

    void setQuestion(const shared_ptr<Question> &question);

    bool isCorrect2() const;

    const string &getAnswerContent() const;

    void setAnswerContent(const string &answerContent);

    bool isCorrect1() const;

    void setIsCorrect(bool isCorrect);

    const string &getId() const;

    void setId(const string &id);

};


#endif //C___FINAL_EX_ANSWER_H
