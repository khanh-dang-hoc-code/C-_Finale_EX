//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_SUBJECT_H
#define C___FINAL_EX_SUBJECT_H

#include "vector"
#include "string"

using namespace std;

class Exam;
class Major;
class Subject {
private :
    string id;
    vector<Major>* majorList;
    vector<Exam>* examList;
public:
    Subject();

    vector<Major> *getMajorList() const;

    void setMajorList(vector<Major> *majorList);

    vector<Exam> *getExamList() const;

    void setExamList(vector<Exam> *examList);

    const string &getId() const;

    void setId(const string &id);
};


#endif //C___FINAL_EX_SUBJECT_H
