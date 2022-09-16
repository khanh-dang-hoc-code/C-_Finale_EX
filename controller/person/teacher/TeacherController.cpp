//
// Created by khanh on 14/09/2022.
//

#include "TeacherController.h"


vector<Teacher> TeacherController::getAll() {
    return TeacherService::getAll();
}

void TeacherController::addOne() {
    Teacher teacher;
    teacher.inputData();
    AccountController::addOne(teacher);
    TeacherService::addOne(teacher);
}
