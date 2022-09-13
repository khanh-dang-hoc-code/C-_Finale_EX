//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_APPLICATIONVIEW_H
#define C___FINAL_EX_APPLICATIONVIEW_H

#include "iostream"

#include "../utils/Utils.h"

using namespace std;



class ApplicationView {
private :
    static void showAdminMenu();

    static void showUserMenu();

    static void adminMenu();

    static void userMenu();

    static void login();
public :
    static void menu();

};


#endif //C___FINAL_EX_APPLICATIONVIEW_H
