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
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){return tolower(c);});
    chuanHoa(s);
    return s;
}

bool Utils::compareString(string a, const string& b) {
    return strcasecmp(a.c_str() , b.c_str()) == 0;
}

bool  Utils::compareIgnoreString(string a, string b) {
    return a == b;
}



static void textcolor(WORD color)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    wAttributes &= 0xfff0;
    wAttributes |= color;

    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
static void gotoxy(short x, short y)
{
    HANDLE hConsoleOutput;
    COORD Cursor_an_Pos = {x, y};
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}
//void Utils::PR(int xgoc, int ygoc, int xdich, int ydich, char *xau = "Khanh", int tre = 15, int mau = GREEN, int cach = 1)
//{
//    int i, j = 0;
//    textcolor(mau);
//    if (xgoc == xdich && ygoc > ydich && cach == 1)
//    {
//        for (j = 0; j <= strlen(xau); j++)
//        {
//            if (xau[j] != 32)
//                for (i = ygoc; i >= ydich; i--)
//                {
//                    gotoxy(xgoc, i);
//                    putch(xau[j]);
//                    gotoxy(xgoc, i + 1);
//                    putch(' ');
//                    Sleep(tre);
//                }
//            else
//            {
//                gotoxy(xgoc, ydich);
//                putch(' ');
//            }
//            xgoc++;
//        }
//    }
//
//    if (ydich == ygoc && xgoc > xdich && cach == 1)
//    {
//        for (j = 0; j <= strlen(xau); j++)
//        {
//            if (xau[j] != 32)
//                for (i = xgoc; i >= xdich; i--)
//                {
//                    gotoxy(i, ygoc);
//                    printf("%c ", xau[j]);
//                    Sleep(tre);
//                }
//            else
//            {
//                gotoxy(xgoc, ydich);
//                putch(' ');
//            }
//            xdich++;
//        }
//    }
//}
