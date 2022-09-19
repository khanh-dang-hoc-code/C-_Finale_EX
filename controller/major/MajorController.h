//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_MAJORCONTROLLER_H
#define C___FINAL_EX_MAJORCONTROLLER_H

#include "../../serivce/major/MajorService.h"


class MajorController {
private :
    friend class MajorService;
public:
    static void addOne();
};


#endif //C___FINAL_EX_MAJORCONTROLLER_H
