//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_SUBJECTSERVICE_H
#define C___FINAL_EX_SUBJECTSERVICE_H

#include "../../modal/subject/Subject.h"
#include "../../resource/Resource.h"
#include "../../logger/Logger.h"
#include "../../utils/Utils.h"

#include "../../controller/subject/SubjectController.h"
#include "../ServiceAbstractGeneric.h"

class SubjectService : private ServiceAbstractGeneric<Subject> {
public :

    static vector<shared_ptr<Subject>> listSubject;

     void addOne(shared_ptr<Subject> subject) override;

     shared_ptr<Subject> findOneByID(string id) override;

     shared_ptr<Subject> findOneByName(string name) override;

     void updateByID(string id) override;

     void deleteByID(string id) override;

    friend class SubjectController;
};


#endif //C___FINAL_EX_SUBJECTSERVICE_H
