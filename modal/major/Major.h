//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_MAJOR_H
#define C___FINAL_EX_MAJOR_H

#include "vector"
#include "string"
#include "memory"

using namespace std;

class Subject;
class Classes;
class Major {
private:
    string id;
    string name;
    static int countTemp;
    vector<shared_ptr<Classes>> classList;
    vector<shared_ptr<Subject>> subjectList;

public:
    Major();

    explicit Major(const string &name);

    const string &getId() const;

    void setId(const string &id);

    const string &getName() const;

    void setName(const string &name);

    const vector<shared_ptr<Classes>> &getClassList() const;

    void setClassList(const vector<shared_ptr<Classes>> &classList);

    const vector<shared_ptr<Subject>> &getSubjectList() const;

    void setSubjectList(const vector<shared_ptr<Subject>> &subjectList);


};


#endif //C___FINAL_EX_MAJOR_H
