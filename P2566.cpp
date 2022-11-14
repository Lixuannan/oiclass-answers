// Created in Sat Nov 12 16:27:39 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;
bool n[1000];
int a, b, c, n1, n2, n3, n4, n5, n6, t;

int main() {
    cin >> a >> b >> c;
    n[a * 100 + b * 10 + c] = true;
    n[a * 100 + c * 10 + b] = true;
    n[b * 100 + a * 10 + c] = true;
    n[b * 100 + c * 10 + a] = true;
    n[c * 100 + b * 10 + a] = true;
    n[c * 100 + a * 10 + b] = true;
    for (int i=100; i < 1000; i++){
        if (n[i]){
            cout << i << endl;
        }
    }
}