//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_MAJORSERVICE_H
#define C___FINAL_EX_MAJORSERVICE_H

#include "../../modal/major/Major.h"
#include "../ServiceAbstractGeneric.h"

class MajorService : private ServiceAbstractGeneric<Major>{
private :
    static vector<shared_ptr<Major>> listMajor;
      void addOne() override;
     shared_ptr<Major> findOneByID(string id) override;
     shared_ptr<Major> indOneByName(string name) override;
     void updateByID(string id) override;
     void deleteByID(string id) override;

};


#endif //C___FINAL_EX_MAJORSERVICE_H
