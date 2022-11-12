//Created in Sat Nov 12 11:59:15 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
using namespace std;
int a,b,c;
int main(){
    cin >> a >> b;
    if (b == 15){
        cout << 14 << endl;
    }else if (b == 0){
        cout << 1 << endl;
    }else if (a - b == -1){
        cout << (b + 1) << endl;
    }else if (a - b == 1){
        cout << (b - 1) << endl;
    }
}