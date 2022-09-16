//
// Created by khanh on 13/09/2022.
//

#include "TeacherService.h"
#include "../../../modal/account/Account.h"

vector<Teacher> TeacherService::listTeacher;

void TeacherService::addOne(Teacher teacher) {
    TeacherService::listTeacher.push_back(teacher);
    Logger::logger(TEACHER_FILENAME, "Add new teacher with id " + teacher.getID());
}

vector<Teacher> TeacherService::getAll() {
    return TeacherService::listTeacher;
}
