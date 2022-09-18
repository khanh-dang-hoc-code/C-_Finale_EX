//
// Created by khanh on 19/09/2022.
//

#ifndef C___FINAL_EX_SERVICEABSTRACTGENERIC_H
#define C___FINAL_EX_SERVICEABSTRACTGENERIC_H

#include "memory"

using namespace std;

template<class T>
class ServiceAbstractGeneric {
private:
    virtual void addOne();

    virtual shared_ptr<T> findOneByID(string id);

    virtual shared_ptr<T> indOneByName(string name);

    virtual void updateByID(string id);

    virtual void deleteByID(string id);
};


#endif //C___FINAL_EX_SERVICEABSTRACTGENERIC_H
