// Created in Sat Nov 12 16:27:12 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cstring>

using namespace std;
int a[10], b, c, d, x;
bool e[10], p;

int main() {
    for (int i = 123; i < 333; i++) {
        p = true;
        b = i;
        c = i * 2;
        d = i * 3;
        memset(e, false, sizeof(e));
        a[1] = b % 10;
        a[2] = b / 10 % 10;
        a[3] = b / 100;
        a[4] = c % 10;
        a[5] = c / 10 % 10;
        a[6] = c / 100;
        a[7] = d % 10;
        a[8] = d / 10 % 10;
        a[9] = d / 100;
        for (int j = 1; j <= 9; j++) {
            e[a[j]] = true;
        }
        for (int j = 1; j <= 9; j++) {
            if (!e[j]) p=false;
        }
        if (p) cout << b << " " << c << " " << d << endl;
    }
}