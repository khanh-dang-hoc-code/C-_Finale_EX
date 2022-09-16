//
// Created by khanh on 14/09/2022.
//

#ifndef C___FINAL_EX_TEACHERCONTROLLER_H
#define C___FINAL_EX_TEACHERCONTROLLER_H


#include "../../../serivce/person/teacher/TeacherService.h"
#include "../../account/AccountController.h"

class TeacherController {
public:
    friend class TeacherService;
    static vector<Teacher> getAll();
    static void addOne();
};


#endif //C___FINAL_EX_TEACHERCONTROLLER_H
