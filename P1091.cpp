//Created in Sat Nov 12 08:44:23 2022
 //System: Darwin 22.1.0
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