//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_STUDENT_H
#define C___FINAL_EX_STUDENT_H

#include "../Person.h"
#include "memory"

class Classes;
class Student : private Person {
private :
    static int countTemp;
    double averagePoints;
    shared_ptr<Classes>  classes;
public:
    Student();

    Classes getClasses() const;

    void setClasses(Classes &classes);

    double getAveragePoints() const;

    void setAveragePoints(double averagePoints);

    void setClasses1(const shared_ptr<Classes> &classes);

    string getId() const;

    string getName() const;

    void setName(string name);

    void inputData();

    void showData();

};


#endif //C___FINAL_EX_STUDENT_H
