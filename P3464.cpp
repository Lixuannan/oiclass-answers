//Created in Sat Nov 12 11:59:00 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
int s, n, sum;
int main(){
    cin >> s;
    while(sum < s){
        n += 2;
        sum += n * n;
    }
    cout << n - 2;
}