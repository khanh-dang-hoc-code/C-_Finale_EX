//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_TEACHERSERVICE_H
#define C___FINAL_EX_TEACHERSERVICE_H

#include "../../../modal/person/teacher/Teacher.h"
#include "vector"
#include <memory>
#include "functional"

#include "../../../resource/Resource.h"
#include "../../../logger/Logger.h"
#include "../../../controller/person/teacher/TeacherController.h"

using namespace std;

class TeacherService {
private :
    static vector<shared_ptr<Teacher>> listTeacher;
    static void addOne(shared_ptr<Teacher> teacher);
    static vector<shared_ptr<Teacher>> getAll();
    static shared_ptr<Teacher> findTeacherByID(string id);
    static shared_ptr<Teacher> findTeacherByName(string name);
    static  void updateTeacherWithID(string id);
    static void deleteTeacherWithID(string id);
    friend class TeacherController;
};


#endif //C___FINAL_EX_TEACHERSERVICE_H
