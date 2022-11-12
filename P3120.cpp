//Created in Sat Nov 12 11:58:58 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<cmath>

using namespace std;
long long n;
int main(){
    cin >> n;
    for (long long i=2; i <= ceilf(sqrt(n)); i++){
        if (n % i == 0){
            cout << n / i;
            return 0;
        }
    }
}