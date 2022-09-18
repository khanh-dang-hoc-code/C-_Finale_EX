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

class SubjectService {
private :
    static vector<shared_ptr<Subject>> listSubject;

    static void addOne(shared_ptr<Subject> subject);

    static shared_ptr<Subject> findSubjectWithID(string subjectID);

    static vector<shared_ptr<Subject>> getList();

    static shared_ptr<Subject> findSubjectWithMajorID(string majorID);

    friend class SubjectController;
};


#endif //C___FINAL_EX_SUBJECTSERVICE_H
