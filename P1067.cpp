//Created in Sat Nov 12 11:58:35 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;

int n, p = 1;
string in;
int main(){
    cin >> in;
    for (int i=0; i <= 11; i++){
        if (in[i] - '0' >= 0){
            n += (in[i] - '0') * p;
            p += 1;
        }
    }
    if ((int (in[12] - '0') == n % 11) || (n % 11 == 10 && in[12] == 'X')){
        cout << "Right" << endl;
        return 0;
    } else{
        for (int i = 0; i <= 11; i++){
            putchar(in[i]);
        }
        if (n % 11 == 10){
            cout << 'X';
        } else{
            cout << n % 11;
        }
    }
}