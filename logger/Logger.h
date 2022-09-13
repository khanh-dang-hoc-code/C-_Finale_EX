//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_LOGGER_H
#define C___FINAL_EX_LOGGER_H

#include "string"
#include "fstream"
#include "ctime"
#include "chrono"

using namespace  std;

class Logger {
public:
    static void logger(string fileName, string message);
};


#endif //C___FINAL_EX_LOGGER_H
