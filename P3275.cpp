//Created in Fri Nov 11 15:12:37 2022
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