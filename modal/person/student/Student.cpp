//
// Created by khanh on 13/09/2022.
//

#include "Student.h"

const string STUDENT_CODE = "Student";
int Student::countTemp  = 1000;

Classes *Student::getClasses() const {
    return classes;
}

void Student::setClasses(Classes *classes) {
    Student::classes = classes;
}

Student::Student() {
}

void Student::inputData() {
    Person::inputData();
    string id = STUDENT_CODE + to_string(this->countTemp);
    Person::setId(id);
    this->countTemp++;
}

void Student::showData() {
    Person::showData();
}

double Student::getAveragePoints() const {
    return averagePoints;
}

void Student::setAveragePoints(double averagePoints) {
    Student::averagePoints = averagePoints;
}


