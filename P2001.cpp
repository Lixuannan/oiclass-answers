// Created in Sat Nov 12 16:27:30 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include <iostream>
#include <cmath>

using namespace std;
int n;
bool isPrime(int x){
    if (x < 2){
        return false;
    }
    for (int i=2; i <= ceilf(sqrt(x)); i++){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}

bool isPurePrime(int x){
    if (x == 2){
        return true;
    }
    int len = 0, y = x;
    while (y > 0){
        y /= 10;
        len += 1;
    }
    while(x > 0){
        if (!isPrime(x)){
            return false;
        }
        x %= (long long)(pow(10, --len));
    }
    return true;
}

int main(){
    cin >> n;
    for (int i=2; i <= n; i++){
        if (isPurePrime(i)){
            cout << i << " ";
        }
    }
}