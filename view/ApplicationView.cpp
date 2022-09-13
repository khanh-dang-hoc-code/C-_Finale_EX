//
// Created by khanh on 13/09/2022.
//

#include "ApplicationView.h"

#include "../modal/major/Major.h"
#include "../modal/classess/Classes.h"
#include "../modal/subject/Subject.h"

void ApplicationView::showAdminMenu() {

}

void ApplicationView::showUserMenu() {

}

void ApplicationView::adminMenu() {

}

void ApplicationView::userMenu() {

}

void ApplicationView::login() {
    string userName;
    string password;
    cout<<"Enter User Name"<<endl;
    userName = Utils::inputString();
    cout<<"Enter Password"<<endl;
    password = Utils::inputString();
//    TODO find account and compare if true -> login | false -> log message

    cout<<"login"<<endl;
}

void ApplicationView::menu() {
//    int selection = 2;
//    cout<<"*******************Exam Management Application*******************\n\n\n"<<endl;
//    cout<<"1.\t\tLogin"<<endl;
//    cout<<"0.\t\tExit"<<endl;
//    do{
//        cout<<"Enter Your Selection"<<endl;
//        selection = Utils::inputIntegerNumber();
//        if(selection == 0) {
//            cout<<"Good bye";
//            break;
//        }else if(selection == 1){
//            login();
//        }
//    } while (selection != 1 && selection != 0);
}
