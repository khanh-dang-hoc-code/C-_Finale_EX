//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_EXAM_H
#define C___FINAL_EX_EXAM_H

#include "../subject/Subject.h"
#include "vector"
#include "string"


using namespace std;

class Question;
class Exam {
private :
    string id;
    Subject subject;
    vector<Question>* questionList;
public:
    const Subject &getSubject() const;

    void setSubject(const Subject &subject);

    vector<Question> *getQuestionList() const;

    void setQuestionList(vector<Question> *questionList);

    const string &getId() const;

    void setId(const string &id);
};


#endif //C___FINAL_EX_EXAM_H
