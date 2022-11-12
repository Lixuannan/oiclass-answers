//Created in Sat Nov 12 11:59:16 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
using namespace std;
int n, jg, yx, in;
int main(){
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> in;
        if (in >= 60){
            jg += 1;
        }
        if (in >= 85){
            yx += 1;
        }
    }
    cout << int (double (jg * 100) / n + 0.5) << "%" << "\n" << int (double (yx * 100) / n + 0.5) << "%" << endl;
}