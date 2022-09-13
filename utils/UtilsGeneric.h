//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_UTILSGENERIC_H
#define C___FINAL_EX_UTILSGENERIC_H

#include "string"
#include "iostream"

using namespace std;
#define quote(x) #x

template <class T> class UtilsGeneric {
public :
    static void findByID(T t){
        cout<< typeid(t).name()<<endl;
    }
};


#endif //C___FINAL_EX_UTILSGENERIC_H
