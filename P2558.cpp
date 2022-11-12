//Created in Sat Nov 12 11:58:56 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cmath"

using namespace std;
long long n, cnt;
int main(){
    cin >> n;
    for (long long i=0; i <= (long long)(ceilf(sqrt(float (n)))); i++){
        if (sqrt(n - i * i) == (long long)(sqrt(n - i * i))){
            cnt += 1;
        }
    }
    cout << cnt;
}