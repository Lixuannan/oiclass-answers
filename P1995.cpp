//Created in Sat Nov 12 11:58:50 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
using namespace std;
int n,minn,maxn;
int main(){
    cin >> n;
    if (n % 2 == 0){
        if (n % 4 == 0){
            minn = n / 4;
        }else if ((n - 2) % 4 == 0){
            minn = n / 4 + 1;
        }
        if (n % 2 == 0){
            maxn = n / 2;
        }else if ((n - 1) % 2 == 0){
            maxn = n / 2 + 1;
        }
    }
    cout << minn << " "  << maxn << endl;
}