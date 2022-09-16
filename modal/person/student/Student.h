//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_STUDENT_H
#define C___FINAL_EX_STUDENT_H

#include "../../classess/Classes.h"
#include "../Person.h"

class Student : private Person {
private :
    Classes classes;
    static int countTemp;
    double averagePoints;
public:
    Student();

    Classes getClasses() const;

    void setClasses(Classes &classes);

    double getAveragePoints() const;

    void setAveragePoints(double averagePoints);


    void inputData();

    void showData();

};


#endif //C___FINAL_EX_STUDENT_H
