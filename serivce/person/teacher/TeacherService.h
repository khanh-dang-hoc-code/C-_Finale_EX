//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_TEACHERSERVICE_H
#define C___FINAL_EX_TEACHERSERVICE_H

#include "../../../modal/person/teacher/Teacher.h"
#include "vector"

#include "../../../resource/Resource.h"
#include "../../../logger/Logger.h"

using namespace std;

class TeacherService {
private :
public :
    static vector<Teacher> listTeacher;
    static void addOne(Teacher teacher);
    static vector<Teacher> getAll();
};


#endif //C___FINAL_EX_TEACHERSERVICE_H
