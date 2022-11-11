//Created in Fri Nov 11 15:24:23 2022
 //System: Darwin 22.1.0
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