// Created in Sat Nov 12 16:27:30 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
#include "iomanip"
using namespace std;
double n;
int main(){
    cin >> n;
    if (n > 100){
        cout << setprecision(2) << fixed << 90 + (n - 100) * 0.6 << endl;
    } else{
        cout << setprecision(2) << fixed << n * 0.9 << endl;
    }
}