//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_SUBJECT_H
#define C___FINAL_EX_SUBJECT_H

#include "vector"
#include "string"
#include "memory"

using namespace std;

class Exam;

class Major;

class Subject {
private :
    string id;
    string name;
    vector<shared_ptr<Major>> majorList;
    vector<shared_ptr<Exam>> examList;
public:
    Subject();

    const string &getId() const;

    void setId(const string &id);

    const vector<shared_ptr<Major>> &getMajorList() const;

    void setMajorList(const vector<shared_ptr<Major>> &majorList);

    const vector<shared_ptr<Exam>> &getExamList() const;

    void setExamList(const vector<shared_ptr<Exam>> &examList);

    const string &getName() const;

    void setName(const string &name);

    explicit Subject(const string &name);
};


#endif //C___FINAL_EX_SUBJECT_H
