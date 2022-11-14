// Created in Sat Nov 12 16:27:17 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;
bool ab, AB, __, Num;
string in, abc, ABC, _, num;
int main(){
    cin >> in;
    for (char i: in){
        if (i >= 48 && i <= 57){
            Num = true;
            num += i;
        } else if (i >= 65 && i <= 90){
            AB = true;
            ABC += i;
        } else if (i >= 97 && i <= 122){
            ab = true;
            abc += i;
        } else if (i >= 32){
            __ = true;
            _ += i;
        }
    }
    cout << "password level:" << ab + AB + __ + Num << endl;
    if (!ab){
        cout << "(Null)" << endl;
    } else{
        cout << abc << endl;
    }
    if (!AB){
        cout << "(Null)" << endl;
    } else{
        cout << ABC << endl;
    }
    if (!Num){
        cout << "(Null)" << endl;
    } else{
        cout << num << endl;
    }
    if (!__){
        cout << "(Null)" << endl;
    } else{
        cout << _ << endl;
    }
}