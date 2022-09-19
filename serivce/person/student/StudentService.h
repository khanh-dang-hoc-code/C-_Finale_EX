//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_STUDENTSERVICE_H
#define C___FINAL_EX_STUDENTSERVICE_H

#include "vector"
#include "../../../modal/person/student/Student.h"
#include "memory"
#include "../../ServiceAbstractGeneric.h"
#include "../../../resource/Resource.h"
#include "../../../logger/Logger.h"
#include "../../../utils/Utils.h"
#include "../../../controller/person/student/StudentController.h"

using namespace std;
class StudentService : private ServiceAbstractGeneric<Student> {
private :
    static vector<shared_ptr<Student>> listStudent;

     void addOne(shared_ptr<Student> student) override;

     shared_ptr<Student> findOneByID(string id) override;

     shared_ptr<Student> findOneByName(string name) ;

     void updateByID(string id) override;

     void deleteByID(string id) override;

     friend class StudentController;
};


#endif //C___FINAL_EX_STUDENTSERVICE_H
