//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_MAJORSERVICE_H
#define C___FINAL_EX_MAJORSERVICE_H

#include "../../modal/major/Major.h"
#include "../ServiceAbstractGeneric.h"
#include "../../controller/major/MajorController.h"
#include "../../logger/Logger.h"
#include "../../resource/Resource.h"
#include "../../utils/Utils.h"

class MajorService : private ServiceAbstractGeneric<Major> {
private :
    static vector<shared_ptr<Major>> listMajor;

    void addOne(shared_ptr<Major> major) override;

    shared_ptr<Major> findOneByID(string id) override;

    shared_ptr<Major> findOneByName(string name) override;

    void updateByID(string id) override;

    void deleteByID(string id) override;

    friend class MajorController;

};


#endif //C___FINAL_EX_MAJORSERVICE_H
