//Created in Sat Nov 12 11:59:05 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
long long n, cnt4, cnt7;
int main(){
    cin >> n;
    while (n % 4 == 0 || n % 7 == 0){
        if (n % 4 == 0){
            cnt4 += 1;
            n /= 4;
        }
        if (n % 7 == 0){
            cnt7 += 1;
            n /= 7;
        }
    }
    cout << cnt4 << " " << cnt7;
}