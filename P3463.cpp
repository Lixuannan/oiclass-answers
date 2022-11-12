//Created in Sat Nov 12 11:58:59 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
long long s, n, sum;
int main(){
    cin >> s;
    while(sum < s){
        n += 1;
        sum += n;
    }
    cout << n;
}