//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_CLASSES_H
#define C___FINAL_EX_CLASSES_H

#include "string"
#include "iostream"
#include "vector"
#include "../major/Major.h"

using namespace std;
class Student;
class Classes {
private :
    string id;
    vector<Student>* studentList;
    Major major;
public:
    Classes();

    const Major &getMajor() const;

    void setMajor(const Major &major);

    const string &getId() const;

    void setId(const string &id);

    vector<Student> *getStudentList() const;

    void setStudentList(vector<Student> *studentList);



};


#endif //C___FINAL_EX_CLASSES_H
