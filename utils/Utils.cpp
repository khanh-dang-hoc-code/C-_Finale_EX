//
// Created by khanh on 13/09/2022.
//

#include "Utils.h"


double Utils::inputDoubleNumber() {
    while (true) {
        string result;
        try {
            cin >> result;
            return stod(result);
        }
//        catch (Exceptions e) {
//            cout << e.what() << endl;
//        }
        catch (exception e1){
            cout<<e1.what()<<endl;
        }
    }
}

int Utils::inputIntegerNumber() {
    while (true) {
        string result;
        try {
            cin >> result;
            return stoi(result);
        }
//        catch (Exceptions e) {
//            cout << e.what() << endl;
//        }
        catch (exception e1){
            cout<<e1.what()<<endl;
        }
    }
}

static char toupper(char charx) {
    if (charx >= 'a' && charx <= 'z') charx = charx - 32;
    return charx;
}

static void chuanHoa(string &a) {

    int n = a.size();

    for(int i=0;i<n;i++){
        if(a[i]==' '){
            for(int j=i;j<n-1;j++){
                a[j] = a[j+1];
            }
            a[n-1]=NULL;
            i--;
            n--;
        }
        else break;
    }

    for(int i=n-1;i>=0;i--){
        if(a[i]==' '){
            a[i]=NULL;
            n--;
        }
        else break;
    }

    for(int i=1;i<n-1;i++)
    {
        if(a[i]==a[i+1]){
            for(int j=i;j<n-1;j++){
                a[j] = a[j+1];
            }
            a[n-1]=NULL;
            i--;
            n--;
        }
    }
    a[0] =  toupper(a[0]);
}

string Utils::inputString() {
    string s;
    getline (cin, s);
    chuanHoa(s);
    return s;
}

bool Utils::compareString(string a, const string& b) {
    return strcasecmp(a.c_str() , b.c_str()) == 0;
}

bool  Utils::compareIgnoreString(string a, string b) {
    return a == b;
}