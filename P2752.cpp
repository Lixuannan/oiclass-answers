// Created in Sat Nov 12 16:27:42 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;
int minp = 9999, a[123];
string in;
int main(){
    cin >> in;
    for (int i: in){
        a[i] += 1;
    }
    for (int i=97; i <= 122; i++){
        if (a[i] == 1 && in.find(i) < minp){
            minp = in.find(i);
        }
    }
    if (in[minp] == 0) cout << "no";
    else cout << in[minp];
}