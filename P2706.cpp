// Created in Sat Nov 12 16:27:41 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;

string getstr(){
    char a;
    string out;
    while(cin.get(a)){
        if (a != '\n'){
            out += a;
        } else{
            return out;
        }
    }
}

int n;
string in;
int main(){
    in = getstr();
    for (char i: in){
        if (i != ' ' && i != '\n'){
            n += 1;
        }
    }
    cout << n;
}