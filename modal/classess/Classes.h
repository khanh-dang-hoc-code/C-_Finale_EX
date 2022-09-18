//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_CLASSES_H
#define C___FINAL_EX_CLASSES_H

#include "string"
#include "iostream"
#include "vector"
#include "memory"

using namespace std;
class Major;
class Student;
class Classes {
private :
    string id;
    string name;
    int totalStudent;
    int maxTotal;
    vector<shared_ptr<Student>> studentList;
    shared_ptr<Major> major;
public:
    Classes();

    const shared_ptr<Major> &getMajor() const;

    Classes(const string &name, int maxTotal);

    void setMajor(const shared_ptr<Major> &major);

    const string &getId() const;

    void setId(const string &id);

    const vector<shared_ptr<Student>> &getStudentList() const;

    void setStudentList(const vector<shared_ptr<Student>> &studentList);

    const string &getName() const;

    void setName(const string &name);

    int getTotalStudent() const;

    void setTotalStudent(int totalStudent);

    int getMaxTotal() const;

    void setMaxTotal(int maxTotal);

};


#endif //C___FINAL_EX_CLASSES_H
