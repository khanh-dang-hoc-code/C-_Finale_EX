//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_QUESTION_H
#define C___FINAL_EX_QUESTION_H

#include "string"

#include "../exam/Exam.h"

class Answer;
class Question {
private :
    string id;
    string questionContent;
    vector<Answer>* answerList;
    Exam exam;


public:
    const Exam &getExam() const;

    void setExam(const Exam &exam);

    const string &getQuestionContent() const;

    void setQuestionContent(const string &questionContent);

    vector<Answer> *getAnswerList() const;

    void setAnswerList(vector<Answer> *answerList);

    const string &getId() const;

    void setId(const string &id);
};


#endif //C___FINAL_EX_QUESTION_H
