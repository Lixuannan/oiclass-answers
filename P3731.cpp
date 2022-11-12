//Created in Sat Nov 12 11:59:13 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;
double s, l;
int main(){
    cin >> s;
    l = sqrt(s / 3.14);
    cout << setprecision(2) << fixed << l;
}