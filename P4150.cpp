//Created in Sat Nov 12 11:59:17 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
int n, tgp=7, dzp=9;
string str;
string a = "abcdefghijklmnopqrstuvwxyz";
int main(){
    cin >> str;
    for (char & i : str){
        i = a[(a.find(i) + 3) % 26];
    }
    cout << str << endl;
}