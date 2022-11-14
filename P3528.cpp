// Created in Sat Nov 12 16:27:45 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;
int in, maxn, minn = 99999, sum;
int main(){
    for (int i=1; i <= 5; i ++){
        cin >> in;
        sum += in;
        if (in > maxn){
            maxn = in;
        }
        if (in < minn){
            minn = in;
        }
    }
    cout << sum - minn - maxn;
}