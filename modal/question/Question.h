//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_QUESTION_H
#define C___FINAL_EX_QUESTION_H

#include "string"
#include "memory"
#include "vector"

using namespace std;

class Exam;
class Answer;
class Question {
private :
    string id;
    string questionContent;
    vector<shared_ptr<Answer>> answerList;
    shared_ptr<Exam> exam;


public:
    const shared_ptr<Exam> &getExam() const;

    explicit Question(const string &questionContent);

    void setExam(const shared_ptr<Exam> &exam);

    const string &getQuestionContent() const;

    void setQuestionContent(const string &questionContent);

    const vector<shared_ptr<Answer>> &getAnswerList() const;

    void setAnswerList(const vector<shared_ptr<Answer>> &answerList);

    const string &getId() const;

    void setId(const string &id);
};


#endif //C___FINAL_EX_QUESTION_H
