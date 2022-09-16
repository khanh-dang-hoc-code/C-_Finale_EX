//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_UTILS_H
#define C___FINAL_EX_UTILS_H

#include "string"
#include "iostream"
#include "cstring"
#include <algorithm>
#include "stdio.h"
#include "conio.h"
#include "windows.h"
#include <unistd.h>


#define GREEN 10

using namespace std;

class Utils {
public :
    static int inputIntegerNumber();

    static double inputDoubleNumber();

    static string inputString();

    static bool compareString(string a, const string &b);

    static bool compareIgnoreString(string a, string b);

    static string convertMessage();

//    static void PR(int xgoc, int ygoc, int xdich, int ydich, char *xau = "Khanh", int tre = 15, int mau = GREEN, int cach = 1);
};


#endif //C___FINAL_EX_UTILS_H
