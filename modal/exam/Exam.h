//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_EXAM_H
#define C___FINAL_EX_EXAM_H

#include "vector"
#include "string"
#include "memory"


using namespace std;

class Subject;
class Question;
class Exam {
private :
    string id;
    shared_ptr<Subject> subject;
    vector<shared_ptr<Question>> questionList;
public:
    const shared_ptr<Subject> &getSubject() const;

    void setSubject(const shared_ptr<Subject> &subject);

    const vector<shared_ptr<Question>> &getQuestionList() const;

    void setQuestionList(const vector<shared_ptr<Question>> &questionList);

    const string &getId() const;

    void setId(const string &id);
};


#endif //C___FINAL_EX_EXAM_H
