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
#include "../serivce/major/MajorService.h"



void ApplicationView::showAdminMenu() {

}

void ApplicationView::showUserMenu() {
}

void ApplicationView::adminMenu() {
    int option = 100;
    do{
        showAdminMenu();
        cout<<"Enter your option"<<endl;
        option = Utils::inputIntegerNumber();

        switch (option) {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 0:
                cout<<"Logout"<<endl;
                break;
            default:
                cout<<"Retry"<<endl;
        }
    } while (option != 0);
}

void ApplicationView::userMenu() {
    int option = 100;
    do{
        showUserMenu();
        cout<<"Enter your option"<<endl;
        option = Utils::inputIntegerNumber();

        switch (option) {
            case 1:

                break;
            case 0:
                cout<<"Logout"<<endl;
                break;
            default:
                cout<<"Retry"<<endl;
        }
    } while (option != 0);

}

void ApplicationView::login() {
    string userName;
    string password;
    MajorController::addOne();
    cout<<"Enter User Name"<<endl;
    userName = Utils::inputString();
    cout<<"Enter Password"<<endl;
    getline(cin, password);
    shared_ptr<Account> a = AccountController::findAccontByUserName(userName);
    if(a != nullptr){
        if(Utils::compareString(password, a->getPassword())){
            if(a->getRole() == ADMIN){
                adminMenu();
            }else{
                userMenu();
            }
        } else{
            cout<<"Incorrect userName or password"<<endl;
        }
    }else {
        cout<<"Account does not exits"<<endl;
    }
}

void ApplicationView::menu() {
    shared_ptr<Account> admin(new Account("admin", "admin123", ADMIN));
    AccountController::addOne(admin);
    AccountController::getAll();
    int selection = 2;
    cout<<"*******************Exam Management Application*******************\n\n\n"<<endl;
    cout<<"1.\t\tLogin"<<endl;
    cout<<"0.\t\tExit"<<endl;
    do{
        cout<<"Enter Your Selection"<<endl;
        selection = Utils::inputIntegerNumber();
        if(selection == 0) {
            cout<<"Good bye";
            break;
        }else if(selection == 1){
            login();
        }
    } while (selection != 1 && selection != 0);
//    introduce();
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