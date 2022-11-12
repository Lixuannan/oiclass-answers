//Created in Sat Nov 12 11:59:08 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cmath"

using namespace std;
int n;
int main(){
    cin >> n;
    if (n < 64){
        cout << (long long) (pow(2, n) - 1);
    }else{
        cout << "18446744073709551615";
    }
}