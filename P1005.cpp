//Created in Sat Nov 12 11:58:29 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>

using namespace std;

int main(){
    const int tPerRange = 300 / (6 - 4);
    int range, tAnswer;
    cin>>range;
    tAnswer = tPerRange * range;
    cout<<tAnswer<<"\n";
}