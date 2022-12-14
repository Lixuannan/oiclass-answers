// Created in Sat Nov 12 16:27:15 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include <iostream>
#include <cmath>

using namespace std;
int x, y;
bool p;

void out16(int n) {
    int temp;
    string out = "";
    while (n > 0) {
        temp = n % 16;
        if (temp < 10) {
            out = char(temp + '0') + out;
        } else {
            out = char(temp + '7') + out;
        }
        n /= 16;
    }
    cout << out << " ";
}

bool isPerfectNum(int n) {
    int sum = 0, m = n;
    for (int i=2; i <= floor(sqrt(n)); i++){
        if (n % i == 0){
            sum += i;
            sum += n / i;
            continue;
        }
    }
    if (sum + 1 == m){
        return true;
    } else{
        return false;
    }
}

int main() {
    cin >> x >> y;
    if (x > y) {
        swap(x, y);
    }
    for (int i = x; i <= y; i++) {
        if (isPerfectNum(i)) {
            out16(i);
            p = true;
        } else {
            continue;
        }
    }
    if (!p){
        cout << "no" << endl;
    }
}