//
// Created by khanh on 13/09/2022.
//

#ifndef C___FINAL_EX_APPLICATIONVIEW_H
#define C___FINAL_EX_APPLICATIONVIEW_H

#include "iostream"

using namespace std;



class ApplicationView {
private :
    void showAdminMenu();

    void showUserMenu();

    void adminMenu();

    void userMenu();

public :
    static void menu();
};


#endif //C___FINAL_EX_APPLICATIONVIEW_H
