//Created in Sat Nov 12 11:58:44 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include <iostream>

using namespace std;
int cnt;
string str;
int main(){
    cin >> str;
    for (char i: str){
        if (i == '1'){
            cnt += 1;
        }
    }
    cout << cnt;
}