//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_MAJOR_H
#define C___FINAL_EX_MAJOR_H

#include "vector"
#include "string"

using namespace std;

class Subject;
class Classes;
class Major {
private:
    string id;
    string name;
    static int countTemp;
    vector<Classes>* classList;
    vector<Subject>* subjectList;

public:
    Major();

    vector<Subject> *getSubjectList() const;

    void setSubjectList(vector<Subject> *subjectList);

    const string &getId() const;

    void setId(const string &id);

    const string &getName() const;

    void setName(const string &name);

    vector<Classes> *getClassList() const;

    void setClassList(vector<Classes> *classList);


};


#endif //C___FINAL_EX_MAJOR_H
