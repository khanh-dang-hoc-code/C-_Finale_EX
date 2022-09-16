//
// Created by khanh on 13/09/2022.
//

#include "ApplicationView.h"

#include "../modal/major/Major.h"
#include "../modal/classess/Classes.h"
#include "../modal/subject/Subject.h"
#include "../controller/account/AccountController.h"
#include "../controller/person/teacher/TeacherController.h"

#include "../modal/classess/Classes.h"
#include "../modal/person/student/Student.h"



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
//    introduce();

    TeacherController::addOne();
//    cout<<AccountController::getAll().at(0).getTeacher()
//    cout<<AccountController::getAll().at(0).getTeacher()
//Teacher te;
//Account ac;
//te.setAccount(&ac);
//cout<<te.getAccount()->getAccountId();
}


void ApplicationView::introduce(){
//    Utils::PR(38, 4, 38, 3, "Ban Dang Lo Lang Ve Suc Khoe ?", 10);
//    sleep(2);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, "Ban Dang Tu Ti Ve Chiec Bung Mo Cua Ban Than ?", 10);
//    sleep(2);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, "Dung Lo Lang. Vi :");
//    sleep(1);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, "Da Co Phong Gym Ngoc Khanh.", 10);
//    sleep(1);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, "Phong Gym Ngoc Khanh Voi Cac Thiet Bi Duoc Nhap Khau Tu Han Quoc", 10);
//    sleep(1);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, "Ket Hop Voi Doi Ngu Huan Luyen Vien Nhieu Kinh Nghiem", 10);
//    sleep(1);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, "Tu Tin Se cho Ban Trai Nghiem Tuyet Voi Nhat Khi Den Voi Chung Toi", 10);
//    sleep(1);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, "DAC BIET ", 10);
//    sleep(1);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, "SIEU UU DAI GIAM 90% ", 10);
//    sleep(1);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, "SIEU UU DAI GIAM 90% ", 10);
//    sleep(1);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, "CO HOI DUY NHAT CHI CO TAI PHONG GYM NGOC KHANH", 10);
//    sleep(1);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, (char *) "Thoi Gian Dien Ra Su Kien Tu 09/04 - 30/04", 10);
//    sleep(1);
//    system("cls");
//    Utils::PR(38, 4, 38, 3, (char *) "Dung Bo Lo Nhe", 10);
//    sleep(1);
//    system("cls");
}