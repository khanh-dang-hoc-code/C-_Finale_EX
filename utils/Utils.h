//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_UTILS_H
#define C___FINAL_EX_UTILS_H

#include "string"
#include "iostream"
#include "cstring"
#include <algorithm>

using namespace std;

class Utils {
public :
    static int inputIntegerNumber();

    static double inputDoubleNumber();

    static string inputString();

    static bool compareString(string a, const string &b);

    static bool compareIgnoreString(string a, string b);
};


#endif //C___FINAL_EX_UTILS_H
