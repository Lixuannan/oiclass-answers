// Created in Sat Nov 12 16:27:14 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;
int n;
string in;

string read(){
    char a;
    string ret = "";
    while (true){
        a = getchar();
        if (a == '#'){
            return ret;
        } else{
            ret += a;
        }
    }
}

int main(){
    in = read();
    for (char i: in){
        if (i == 'b' || i == 'B' || i == 'm' || i == 'M'){
            n += 1;
        }
    }
    cout << n;
}