//Created in Sat Nov 12 11:58:54 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
using namespace std;
int a,b,c;
int main(){
    cin >> a >> b >> c;
    if (a + b <= c){
        cout << "no" << endl;
        return 0;
    }else if (a + c <= b){
        cout << "no" << endl;
        return 0;
    }else if (b + c <= a){
        cout << "no" << endl;
        return 0;
    }
    cout << "yes" << endl;
}